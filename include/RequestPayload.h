#include <vector>
using std::vector;

class RequestPayload {
private:
	vector<unsigned char> requestPayload;

public:
	RequestPayload(vector<unsigned char> requestPayload)
		: requestPayload(requestPayload) {}

	vector<unsigned char> getRequestPayload() {
		return requestPayload;
	}
	void setRequestPayload(vector<unsigned char> requestPayload) {
		this->requestPayload = requestPayload;
	}
};