#pragma once

#include "Core.h"

namespace Zero {	
	class ZERO_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}