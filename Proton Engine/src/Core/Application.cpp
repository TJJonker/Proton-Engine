#include "ppch.h"
#include "Core/Application.h"

namespace Proton {
    Application::Application() 
        : m_IsRunning(true), m_Window(nullptr)
    {
        m_Window = Window::Create();
    }

    Application::~Application() { }

    Application& Proton::Application::GetInstance()
    {
        static Application application;
        return application;
    }

    void Application::Run() {
        while (m_IsRunning) {
            m_Window->OnUpdate();
        }
    }
}