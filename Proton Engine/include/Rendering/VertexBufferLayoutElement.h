#pragma once
#include <cstdint>

namespace Proton::Rendering {
	struct VertexBufferLayoutElement {
		unsigned int Type;
		uint8_t Count;
		uint8_t Offset;
	};
}