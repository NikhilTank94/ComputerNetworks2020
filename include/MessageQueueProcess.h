import <PeerProcess.h>

class MessageQueueProcess {

private: PeerProcess peerProcess;

public:
	MessageQueueProcess(PeerProcess peerProcess)
		: peerProcess(peerProcess) {}
	
	PeerProcess getPeerProcess() {
		return peerProcess;
	}

	void run() {
		try {
			for (; !this->getPeerProcess().isExit();) {
				for (; !this->getPeerProcess().getBlockingQueueMessages().isEmpty();) {
					MessageWriter ms = this->getPeerProcess().getBlockingQueueMessages().take();
					ms.writeObject();
				}
			}
		}
		catch (int e) {
			this->getPeerProcess().setExit(true);
		}
	}
}