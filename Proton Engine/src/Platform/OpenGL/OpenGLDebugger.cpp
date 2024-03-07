#include "ppch.h"
#include "Platform/OpenGL/OpenGLDebugger.h"
#include <gl/GL.h>

namespace Proton {
	void GLClearErrors() {
		while (glGetError() != GL_NO_ERROR); 
	}

	bool GLLogCall(const char* function, const char* file, int line) { 
		while (GLenum error = glGetError()) {
			std::cout << "[OpenGL]: (" << error << "): " << function << "\nfile: " << file << "\nline: " << line << std::endl;
			return false;
		}
		return true;
	}
}