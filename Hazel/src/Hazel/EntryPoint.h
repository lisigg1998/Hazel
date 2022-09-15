// The entry point of any Hazel application.

#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Hazel Engine Running!\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	return 0;
}

#endif