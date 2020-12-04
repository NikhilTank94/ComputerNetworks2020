#include <vector>
using std::vector;

class PiecePayload {
private:
	vector<unsigned char> piecePayload;

public:
	PiecePayload(vector<unsigned char> piecePayload)
		: piecePayload(piecePayload) {}

	vector<unsigned char> getPiecePayload() {
		return piecePayload;
	}
	void setPiecePayload(vector<unsigned char> piecePayload) {
		this->piecePayload = piecePayload;
	}
};