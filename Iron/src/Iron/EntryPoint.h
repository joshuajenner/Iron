#pragma once

#ifdef IRN_PLATFORM_WINDOWS

extern Iron::Application* Iron::CreateApplication();

int main(int argc, char** argv)
{
	printf("Iron Engine\n");
	auto app = Iron::CreateApplication();
	app->Run();
	delete app;
}

#endif