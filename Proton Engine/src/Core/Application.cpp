#include "ppch.h"
#include "Core/Application.h"

namespace Proton {
    Application::Application() 
        : m_IsRunning(true), m_Window(nullptr)
    {
        m_Window = Window::Create();
        m_Window->SetEventCallbackFunction([&](Event& e) { OnEvent(e); });
    }

    Application::~Application() { }

    Application& Proton::Application::GetInstance()
    {
        static Application application;
        return application;
    }

    void Application::OnEvent(Event& e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>([&](Event& e) { CloseApplication(); return true; });
    }

    void Application::Run() {
        while (m_IsRunning) {
            m_Window->OnUpdate();
        }
    }
    
    void Application::CloseApplication() { m_IsRunning = false; }
}