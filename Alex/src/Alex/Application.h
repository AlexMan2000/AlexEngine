#pragma once

#include "Core.h"

namespace Alex {
	// ALEX_API is a macro inside Core.h that will be initialized to differetn values dependeing on the preprocess header.
	class ALEX_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};


	// To be defined in client
	Application* CreateApplication();

}
