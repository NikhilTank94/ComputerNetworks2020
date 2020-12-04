#include <vector>
using std::vector;

class BitfieldPayload {
private:
	vector<unsigned char> bitfieldPayload;

public:
	BitfieldPayload(vector<unsigned char> bitfieldPayload)
		: bitfieldPayload(bitfieldPayload) {}

	vector<unsigned char> getBitfieldPayload() {
		return bitfieldPayload;
	}

	void setBitfieldPayload(vector<unsigned char> bitfieldPayload) {
		this->bitfieldPayload = bitfieldPayload;
	}
};