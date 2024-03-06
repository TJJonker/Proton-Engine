#pragma once
#include "Core/Application.h"

	extern Proton::Application* Proton::CreateApplication();

int main(int argc, char** argv) {
	Proton::Application* application = Proton::CreateApplication();
	application->Run();
	delete application;
	return 0;
}