#include "ppch.h"
#include "Rendering/VertexBuffer/VertexBufferLayoutElement.h"

namespace Proton::Rendering {
	const std::map<VertexBufferLayoutElementType, U8> Proton::Rendering::VertexBufferLayoutElement::sizes = {
		{ VertexBufferLayoutElementType::FLOAT, 4 },
		{ VertexBufferLayoutElementType::INT, 4}
	};
}