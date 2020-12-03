class Payload {

	//private static final long serialVersionUID = -5424746124279275035L;
	unsigned char payload[];

public: 
	Payload() {
		// TODO Auto-generated constructor stub
	}

	Payload(unsigned char payload[]) {
		super();
		this->setPayload(payload);
	}

	unsigned char getPayload[]() {
		return payload;
	}

	void setPayload(unsigned char payload[]) {
		this->payload = payload;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub

	}

}