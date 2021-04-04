#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//this is something that will be implemented in the client
extern Hazel::Application* Hazel::createApplication();

int main(int argc, char** argv) {
	std::cout << "Hazel Engine!" << std::endl;

	Hazel::Application* app = Hazel::createApplication();
	app->run();
	delete app;
}

#endif