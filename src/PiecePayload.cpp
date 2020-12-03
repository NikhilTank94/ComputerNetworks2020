class PiecePayload : Public Payload {

	//private static final long serialVersionUID = 5795021442144294811L;
	unsigned char piecePayload[];

public:
	PiecePayload(unsigned char payload[]) {
		this->setPiecePayload(payload);

	}

	unsigned char getPiecePayload[]() {
		return piecePayload;
	}

	void setPiecePayload(unsigned char piecePayload[]) {
		this->piecePayload = piecePayload;
	}

	static void main(string args[]) {
		// TODO Auto-generated method stub

	}
}