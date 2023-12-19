#pragma once

#ifdef Z_PLATFORM_WINDOWS

extern Zero::Application* Zero::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Zero::CreateApplication();
	app->Run();
	delete app;
}

#endif // Z_PLATFORM_WINDOWS