#include <Alex.h>


class Sandbox : public Alex::Application {
public:
	Sandbox() {
	}


	~Sandbox() {
	}
};


// Factory, but defined by the client
Alex::Application* Alex::CreateApplication(){
	return new Sandbox();
}