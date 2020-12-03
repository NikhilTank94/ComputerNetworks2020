class BitfieldPayload {
	//private static final long serialVersionUID = 8052696107658542567L;
	private unsign char bitfieldPayload;

public: 
	BitfieldPayload(unsigned char payload) {
		super(payload);
		this -> setBitfieldPayload(payload);
	}

	unsigned char getBitfieldPayload() {
		return bitfieldPayload;
	}

	void setBitfieldPayload(unsigned char bitfieldPayload) {
		this -> bitfieldPayload = bitfieldPayload;
	}

	static long getSerialversionuid() {
		return serialVersionUID;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub
	}

}