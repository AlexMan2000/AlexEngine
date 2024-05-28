#include <Alex.h>


class Sandbox : public Alex::Application {
public:
	Sandbox() {
	}


	~Sandbox() {
	}
};


// Factory and Strategic, but defined by the client
Alex::Application* Alex::CreateApplication(){
	
	return new Sandbox();
}

