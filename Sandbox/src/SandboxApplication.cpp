#pragma once
#include "Proton.h"
#include <iostream>

class SandboxApplication : public Proton::Application {
public:
	SandboxApplication() {
		GetWindow().SetTitle("My cool window.");
		GetWindow().SetSize(1300, 100);
	}

	~SandboxApplication() {

	}
};

Proton::Application* Proton::CreateApplication() {
	return new SandboxApplication();
}