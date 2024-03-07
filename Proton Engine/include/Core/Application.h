#pragma once
#include "Window.h"

namespace Proton {
	class Application
	{
	public:
		Window* m_Window;
		bool m_IsRunning;

	public:
		Application();
		virtual ~Application();

		static Application& GetInstance();

		Window& GetWindow();

		void Run();
	};

	Application* CreateApplication();
}

