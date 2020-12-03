class HavePayload : public Payload {

	//private static final long serialVersionUID = 3777628630171683471L;
	unsigned char havePayload[]; // 4-byte piece index field we will index from -2,147,483,648 to 2,147,483,647

public:
	HavePayload(unsigned char payload[]) {
		super(payload);
		this->setHavePayload(payload);
	}

	unsigned char getHavePayload[]() {
		return havePayload;
	}

	void setHavePayload(unsigned char havePayload[]) {
		this->havePayload = havePayload;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub
	}

}