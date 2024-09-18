#pragma once

#ifdef VO_PLATFORM_WINDOWS

extern  voisu::Application* voisu::CreateApplication();

int main(int argc, char** argv)
{
	auto app = voisu::CreateApplication();
	app->run();
	delete app;
}

#endif