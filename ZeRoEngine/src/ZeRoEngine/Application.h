#pragma once

#include "Core.h"

namespace ZeRoEngine {
	class ZR_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}
