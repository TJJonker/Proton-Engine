#pragma once
#include "Window.h"
#include <GLFW/glfw3.h>

namespace Proton {
	class OpenGLWindow : public Window {
	private:
		struct WindowData {
			std::string Title;
			uint16_t Width;
			uint16_t Height;
			bool VSync;

			EventCallbackFunction EventCallback;
		};
		
		GLFWwindow* m_Window;
		WindowData m_WindowData;
		
	public:
		OpenGLWindow(const WindowProps& props);
		virtual ~OpenGLWindow();

		void OnUpdate() override;
		inline uint16_t GetWidth() const override { return m_WindowData.Width; }
		inline uint16_t GetHeight() const override { return m_WindowData.Height; }

		void SetSize(uint16_t width, uint16_t height) override;
		void SetTitle(const char* title) override;
		void SetViewport(uint16_t width, uint16_t height) override;
		
		void SetVSync(bool enabled) override;
		bool IsVSyncEnabled() const override { return m_WindowData.VSync; }

	private:
		void Initialize(const WindowProps& props);
		void Shutdown();

		void SetEventCallbackFunction(const EventCallbackFunction& callback) override { m_WindowData.EventCallback = callback; }

	};
}