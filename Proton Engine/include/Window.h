#pragma once
#include "ppch.h"
#include "Core/Events/Event.h"

namespace Proton {
	struct WindowProps {
		std::string Title;
		uint16_t Width;
		uint16_t Height;

		WindowProps(const std::string& windowTitle = "New Window", uint16_t width = 1920, uint16_t height = 1080)
			: Title(windowTitle), Width(width), Height(height) { }
	};

	class Window {
	public:
		virtual ~Window() = default;
		virtual uint16_t GetWidth() const = 0;
		virtual uint16_t GetHeight() const = 0;

		virtual void SetSize(uint16_t width, uint16_t height) = 0;
		virtual void SetTitle(const char* title) = 0;
		virtual void SetViewport(uint16_t width, uint16_t height) = 0;

		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSyncEnabled() const = 0;

		virtual void OnUpdate() = 0;

		static Window* Create(const WindowProps& props = WindowProps());

		using EventCallbackFunction = std::function<void(Event&)>;

		virtual void SetEventCallbackFunction(const EventCallbackFunction& callback) = 0;
	};
}

