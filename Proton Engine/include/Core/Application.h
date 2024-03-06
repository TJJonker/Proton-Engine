#pragma once

namespace Proton {
	class Application
	{
	public:
		// Window 
		bool m_IsRunning;

	public:
		Application();
		virtual ~Application();

		static Application& GetInstance();

		//Window& GetWindow();

		virtual void Run() {};
	};

	Application* CreateApplication();
}

