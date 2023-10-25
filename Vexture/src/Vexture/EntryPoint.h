#pragma once

#ifdef VX_PLATFORM_WINDOWS

extern Vexture::Application* Vexture::CreateApplication();

int main(int argc, char** argv)
{
	printf("Vexture Engine\n");
	auto app = Vexture::CreateApplication();
	app->Run();
	delete app;
}

#endif