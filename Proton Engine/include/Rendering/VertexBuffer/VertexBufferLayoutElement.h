#pragma once
#include "PCommon.h"
#include "Rendering/VertexBuffer/VertexBufferLayoutElementType.h"


namespace Proton::Rendering {
	struct VertexBufferLayoutElement {
		const static std::map<VertexBufferLayoutElementType, U8> sizes;

		VertexBufferLayoutElementType Type;
		U8 Count;
		bool Normalized;
		U8 Offset;

		VertexBufferLayoutElement(VertexBufferLayoutElementType type, U8 count, bool normalized = true) 
			: Type(type), Count(count), Normalized(normalized), Offset(0) { }

		static U8 GetDataSize(VertexBufferLayoutElementType type) {
			return sizes.at(type);
		}
	};
}