#include <vector>
using std::vector;

class Payload {
private:
	vector<unsigned char> payload;

public:
	Payload(vector<unsigned char> payload)
		: payload(payload) {}
	vector<unsigned char> getPayload() {
		return payload;
	}
	void setPayload(vector<unsigned char> payload) {
		this->payload = payload;
	}
};