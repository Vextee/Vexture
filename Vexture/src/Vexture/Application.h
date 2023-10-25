#pragma once

#include "Core.h"

namespace Vexture
{
	// This is a class that will be used to run the application.
	// It will be defined in the Sandbox project.
	class VEXTURE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the client.
	Application* CreateApplication();
}


