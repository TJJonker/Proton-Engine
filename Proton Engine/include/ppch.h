#pragma once
#include <string>
#include <iostream>
#include <functional>

#include <Windows.h>

#ifdef PROTON_RENDERER_OPENGL
#include "Platform/OpenGL/OpenGLDebugger.h"
#endif

// Events
#include "Core/Events/WindowEvents.h"