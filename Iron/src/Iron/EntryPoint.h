#pragma once

#ifdef IRN_PLATFORM_WINDOWS

extern Iron::Application* Iron::CreateApplication();

int main(int argc, char** argv)
{
	Iron::Log::Init();
	IRN_CORE_WARN("Init'd Log!");
	int a = 5;
	IRN_INFO("Yo! Var={0}", a);


	auto app = Iron::CreateApplication();
	app->Run();
	delete app;
}

#endif