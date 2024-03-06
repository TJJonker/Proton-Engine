#pragma once
#include "Proton.h"
#include <iostream>

class SandboxApplication : public Proton::Application {
	// Inherited via Application
	void Run() override
	{
		std::cout << "EntryPoint Created succesfully" << std::endl;
	}
};

Proton::Application* Proton::CreateApplication() {
	return new SandboxApplication();
}