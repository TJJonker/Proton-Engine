#include "ppch.h"
#include "Window.h"

#ifdef PROTON_RENDERER_OPENGL
	// Insert OpenGL Window file
#endif

namespace Proton {
	Window* Window::Create(const WindowProps& props) {
#ifdef PROTON_RENDERER_OPENGL
		// Return OpenGL Window instance
#endif
		// Assert if no options
		return nullptr;
	}
}