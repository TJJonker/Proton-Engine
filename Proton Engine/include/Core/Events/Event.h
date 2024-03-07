#pragma once

namespace Proton {
	enum class EventType {
		WindowClose,
		MouseMoved, MouseButtonPressed, MouseButtonReleased, MouseScrolled
	};

#define EVENT_TYPE(type) static EventType GetStaticType() { return type; }\
virtual const char* GetName() const override { return #type; }\
virtual EventType GetEventType() const override { return GetStaticType(); }

	class Event {
	public:
		virtual ~Event() = default;
		bool Consumed = false;

		virtual EventType GetEventType() const = 0;

		// Debugging purposes
		virtual const char* GetName() const = 0;
		virtual const char* ToString() const { return GetName(); }
	};

	class EventDispatcher {
	private:
		Event& m_Event;

	public:
		EventDispatcher(Event& event)
			: m_Event(event) { }

		template<typename T, typename F>
		void Dispatch(const F& function) {
			if (m_Event.GetEventType() == T::GetStaticType()) {
				m_Event.Consumed |= function(static_cast<T&>(m_Event));
			}
		}
	};

}