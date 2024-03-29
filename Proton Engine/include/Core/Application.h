#pragma once
#include "Window.h"

namespace Proton {
	class Application
	{
	private:
		Window* m_Window;
		bool m_IsRunning;

	public:
		Application();
		virtual ~Application();

		static Application& GetInstance();

		Window& GetWindow() { return *m_Window; }

		void OnEvent(Event& e);

		void Run();

		void CloseApplication();
	};

	Application* CreateApplication();
}

