#include <iostream>
#include <string>
#include <Payload.h>
#include <vector>
using std::vector;
using namespace std;
using std::string;

enum class MessageType { CHOKE = 0, UNCHOKE = 1, INTERESTED = 2, NOT_INTERESTED = 3, HAVE = 4, BITFIELD = 5, REQUEST = 6, PIECE = 7 };

class Message {

private:
	//static const long int serialVersionUID = 8799977982265952720L;
	int length;
	unsigned char type;
	vector<unsigned char> payload;
	MessageType messageType;
	Payload msgPayload;

public: 
	Message(int length, unsigned char type, vector<unsigned char> payload[]) {
	this->setlength(length);
	this->setType(type);
	this->setPayload(payload);
	setMsgType(type);
	}

	//public Message(int length, byte type, Payload payload, Object dummyObj) {
	//	this.setLength(length);
	//	this.setType(type);
	//	this.setPayload(payload.getPayload());
	//	setMsgType(type);
	//}


	int getlength() {
		  return length;
	  }
	
	void setlength(int length) {
	this->length = length;
	}

	unsigned char getType() {
	return type;
	}

	void setType(unsigned char type) {
		this->type = type;
	}
	
	vector<unsigned char> getPayload() {
		  return payload;
	  }

	void setPayload(vector<unsigned char> payload) {
		this->payload = payload;
	}

	void setMsgType(unsigned char type) {

		switch (int type) {
		case 0:
			this->setMessageType(MessageType.CHOKE);
			break;
		case 1:
			this->setMessageType(MessageType.UNCHOKE);
			break;
		case 2:
			this->setMessageType(MessageType.INTERESTED);
			break;
		case 3:
			this->setMessageType(MessageType.NOT_INTERESTED);
			break;
		case 4:
			this->setMessageType(MessageType.HAVE);
			break;
		case 5:
			this->setMessageType(MessageType.BITFIELD);
			break;
		case 6:
			this->setMessageType(MessageType.REQUEST);
			break;
		case 7:
			this->setMessageType(MessageType.PIECE);
			break;
		}
	}
	MessageType getMessageType() {
		return messageType;
	}
	
	void setMessageType(MessageType messageType) {
		  this->messageType = messageType;
	}

	Payload getMsgPayload() {
		  return msgPayload;
	}

	void setMsgPayload(Payload msgPayload) {
		  this->msgPayload = msgPayload;
	}
	string toString() {
		  return "Message [length=" + this->getLength() + ", type=" + this->getMessageType() + "]";
	  }

};

