#pragma once

#include "Core.h"
#include <iostream>

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	//To be defined in a client
	Application* createApplication();

}