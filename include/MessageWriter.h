#include <iostream>
#include <string>
#include <vector>
using std::vector;
#include <ActualMessage.h>
#include <HandshakeMessage.h>
#include <ByteArrayOutputStream.h>
#include <fstream>

using namespace std;

class MessageWriter {

private: 
	Message message;

public: 
	MessageWriter(Message message) {
		this->setMessage(message);
	}

	Message getMessage() {
		return message;
	}

	void setMessage(Message message) {
		this->message = message;
	}

	//DataOutputStream getOutStream() {
	//	return outStream;
	//}

	//void setOutStream(DataOutputStream outStream) {
	//	this->outStream = outStream;
	//}

	void writeObject() {
		vector<unsigned char> bos;
		
		cout << "Sending Message : " + string toString(this->getMessage()) << endl;
		
		if (dynamic_cast<Handshake*>(this->getMessage()) != nullptr) {
			Handshake handShakeMessage = (Handshake)this->getMessage();
			sprintf(bos, handShakeMessage.getHeader() + handShakeMessage.getZeroBits()+ handShakeMessage.getPeerID());
		}
		else {
			sprintf(bos, vector <unsigned char> (strlen(this->getMessage())));
			sprintf(bos, unsigned char(this->getMessage().getType()));
			if (!((this->getMessage().getPayload() != NULL) && (strlen(this->getMessage().getPayload()) > 0))) {
				sprintf(bos, vector <unsigned char>(strlen(this->getMessage())) + unsigned char(this->getMessage().getType()));
			}
			else {
				sprintf(bos, vector <unsigned char>(strlen(this->getMessage())) + unsigned char(this->getMessage().getType()) + this->getMessage().getPayload());
			}
		}
	}

}