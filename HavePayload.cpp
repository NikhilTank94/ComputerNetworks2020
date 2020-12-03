class HavePayload {
	//private static final long serialVersionUID = 3777628630171683471L;
	private unsign char havePayload; // 4-byte piece index field we will index from -2,147,483,648 to 2,147,483,647

public:
	HavePayload(unsign char payload) {
		super(payload);
		this->setHavePayload(payload);
	}

	unsign char getHavePayload() {
		return havePayload;
	}

	void setHavePayload(unsign char havePayload) {
		this->havePayload = havePayload;
	}

	static long getSerialversionuid() {
		return serialVersionUID;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub
	}

}