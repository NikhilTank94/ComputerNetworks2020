class RequestPayload : public Payload {

	//private static final long serialVersionUID = 9208727206802180498L;
	unsigned char requestPayload[];

public:
	RequestPayload(unsigned char payload[]) {
		this->setRequestPayload(payload);
	}


	unsigned char getRequestPayload[]() {
		return requestPayload;
	}

	void setRequestPayload(unsigned char requestPayload[]) {
		this->requestPayload = requestPayload;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub

	}

}