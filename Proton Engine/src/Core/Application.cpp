#include "ppch.h"
#include "Core/Application.h"

namespace Proton {
    Application::Application() 
        : m_IsRunning(true) { }

    Application::~Application() { }

    Application& Proton::Application::GetInstance()
    {
        static Application application;
        return application;
    }
}