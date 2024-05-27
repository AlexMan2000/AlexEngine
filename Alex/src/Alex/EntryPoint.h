#pragma once

#ifdef ALEX_PLATFORM_WINDOWS


// Declaration here, but definition should be looked for outside of this file, this allow the client to create their own CreateApplication() method 
extern Alex::Application* Alex::	CreateApplication();

int main(int argc, char* argv[]) {

	auto app = Alex::CreateApplication();
	app->Run();
	delete app;
}


#endif