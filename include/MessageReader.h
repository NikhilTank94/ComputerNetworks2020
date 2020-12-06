#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ActualMessage.h>
#include <HandshakeMessage.h>
#include <ByteArrayOutputStream.h>
#include <BitfieldPayload.h>
#include <HavePayload.h>
#include <PiecePayload.h>
#include <RequestPayload.h>
#include <PeerPayload.h>
#include <Sys/Socket.h>
using namespace std;


class MessageReader {

private:
	Socket socket;
	PeerProcess peerProc;
	bool isHandshakeDone = false;

public:
	MessageReader(Socket socket, PeerProcess peerProc){
		this.setSocket(socket);
		this.setPeerProc(peerProc);
	}

	Socket getSocket() {
		return socket;
	}

	void setSocket(Socket socket) {
		this->socket = socket;
	}

	PeerProcess getPeerProc() {
		return peerProc;
	}

	void setPeerProc(PeerProcess peerProc) {
		this->peerProc = peerProc;
	}

	bool isHandshakeDone() {
		return isHandshakeDone;
	}

	void setHandshakeDone(bool isHandshakeDone) {
		this->isHandshakeDone = isHandshakeDone;
	}
	
	void readObject() {
		ifstream inputStream (this->getSocket().getInputStream());
		if (this->isHandshakeDone()) {
			for (; (!this->getPeerProc().isExit() && inputStream.gcount() < 4);) {
			}
			vector <unsigned char> lengthBytes [4];
			inputStream.read(lengthBytes, 4);
			int length = int(lengthBytes);
			for (; inputStream.gcount() < length;) {
			}
			vector <unsigned char> typeBuffer ;
			try {
				inputStream.read(typeBuffer, 1);
			}
			catch (int e) {
				cout << "error";
			}
			unsigned char type ;
			vector <unsigned char> payload = NULL;
			if (!(length > 1)) {

			}
			else {
				vector <unsigned char> payload [length - 1];
				int recievedBytes = 0;
				try {
					inputStream.read(payload, length - 1);
					throw 4
				}
				catch (int e) {
					cout << "error in meassage read: " << e << '\n';
					throw e;
				}
				}
			}

			Message msg = NULL;
			switch (int (type)) {
				case 4:
					HavePayload havePayLoad = HavePayload(payload);
					msg = Message(length, type, havePayLoad, NULL);
					break;
				case 5:
					BitfieldPayload bitFieldPayLoad = BitfieldPayload(payload);
					msg = Message(length, type, bitFieldPayLoad, NULL);
					break;
				case 6:
					RequestPayload requestPayLoad = RequestPayload(payload);
					msg = Message(length, type, requestPayLoad, NULL);
					break;
				case 7:
					PiecePayload piecePayLoad = PiecePayload(payload);
					msg = Message(length, type, piecePayLoad, NULL);
					break;
				default:
					msg = Message(length, type, payload);
					break;
			}
			return msg;
		}
		else {
			vector<unsigned char> header [18];
			try {
				inputStream.read(header, 18);
				throw 1;
			}
			catch (int e) {
				cout << "error in meassage read: " << e << '\n';
			}
			vector<unsigned char> zerobits [10];
			try {
				inputStream.read(zerobits, 10);
				throw 2;
			}
			catch (int e) {
				cout << "error in meassage read: " << e << '\n';
			}
			vector<unsigned char>  peerId [4];
			try {
				inputStream.read(peerId, 4);
				throw 3;
			}
			catch (int e) {
				cout << "error in meassage read: " << e << '\n';
			}
			this->setHandshakeDone(true);
			return HandShake(int (peerId));
		}

	}

}  