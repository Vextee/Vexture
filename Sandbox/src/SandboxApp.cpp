#include <Vexture.h>

class Sandbox : public Vexture::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Vexture::Application* Vexture::CreateApplication()
{
	return new Sandbox();
}