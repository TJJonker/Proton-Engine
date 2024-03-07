#include "ppch.h"
#include "Window.h"

#ifdef PROTON_RENDERER_OPENGL
#include "Platform/OpenGL/OpenGLWindow.h"
#endif

namespace Proton {
	Window* Window::Create(const WindowProps& props) {
#ifdef PROTON_RENDERER_OPENGL
		return new OpenGLWindow(props);
#endif
		// Assert if no options
		return nullptr;
	}
}