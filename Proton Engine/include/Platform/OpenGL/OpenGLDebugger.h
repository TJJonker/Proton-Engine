#pragma once
#include "Debugging/Assertion.h"

namespace Proton {
	void GLClearErrors();
	bool GLLogCall(const char* function, const char* file, int line);


#ifdef PROTON_DEBUG
#define GLCall(x) x; GLClearErrors(); ASSERT(GLLogCall(#x, __FILE__, __LINE__));
#else
#define GLCall(x)
#endif
}
