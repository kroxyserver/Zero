#pragma once

#ifdef Z_PLATFORM_WINDOWS

extern Zero::Application* Zero::CreateApplication();

int main(int argc, char** argv)
{
	Zero::Log::Init();
	Z_CORE_WARN("Initialized Log!");
	int a = 5;
	Z_INFO("Hello! Var={0}", a);

	auto app = Zero::CreateApplication();
	app->Run();
	delete app;
}

#endif // Z_PLATFORM_WINDOWS