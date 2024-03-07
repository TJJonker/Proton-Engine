#pragma once
#include "Debugging/Log.h"
#include "Core/Application.h"

	extern Proton::Application* Proton::CreateApplication();

int main(int argc, char** argv) {
	// TODO: Move into own module
#ifdef PROTON_DEBUG
	Proton::Log::Init();
#endif
	Proton::Application* application = Proton::CreateApplication();
	application->Run();
	delete application;
	return 0;
}