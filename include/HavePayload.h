#include <vector>

using std::vector;

class HavePayload {
private:
	vector<unsigned char> havePayload;

public:
	HavePayload(vector<unsigned char> havePayload)
		: havePayload(havePayload) {}

	vector<unsigned char> getHavePayload() {
		return havePayload;
	}
	void setHavePayload(vector<unsigned char> havePayload) {
		this->havePayload = havePayload;
	}
};