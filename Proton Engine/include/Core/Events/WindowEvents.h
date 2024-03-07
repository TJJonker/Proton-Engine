#pragma once
#include "Core/Events/Event.h"

namespace Proton {
	class WindowCloseEvent : public Event {
	public:
		WindowCloseEvent() = default;
		EVENT_TYPE(EventType::WindowClose);
	};
}