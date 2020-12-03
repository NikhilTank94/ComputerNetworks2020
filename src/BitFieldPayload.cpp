class BitfieldPayload : public Payload {

	//private static final long serialVersionUID = 8052696107658542567L;
	unsigned char bitfieldPayload[];

public: 
	BitfieldPayload(unsigned char payload[]) {
		this -> setBitfieldPayload(payload);
	}

	unsigned char getBitfieldPayload[]() {
		return bitfieldPayload;
	}

	void setBitfieldPayload(unsigned char bitfieldPayload[]) {
		this -> bitfieldPayload = bitfieldPayload;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub
	}

}