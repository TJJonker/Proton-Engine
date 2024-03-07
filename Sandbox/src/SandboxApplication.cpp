#pragma once
#include "Proton.h"
#include <iostream>

class SandboxApplication : public Proton::Application {
public:
	SandboxApplication() {

	}

	~SandboxApplication() {

	}
};

Proton::Application* Proton::CreateApplication() {
	return new SandboxApplication();
}