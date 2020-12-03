class PiecePayload extends Payload {

	//private static final long serialVersionUID = 5795021442144294811L;

	unsigned char piecePayload;


public:
	PiecePayload(unsigned char payload[]) {
		super(payload);
		this->setPiecePayload(payload);

	}

	unsigned char getPiecePayload() {
		return piecePayload;
	}

	void setPiecePayload(unsigned char piecePayload[]) {
		this->piecePayload = piecePayload;
	}


	static long getSerialversionuid() {
		return serialVersionUID;
	}


	static void main(string args[]) {
		// TODO Auto-generated method stub

	}

}