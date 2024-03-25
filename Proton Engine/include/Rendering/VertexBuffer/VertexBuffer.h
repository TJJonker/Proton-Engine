#pragma once
#include "Rendering/VertexBuffer/VertexBufferLayout.h"

namespace Proton::Rendering {
	class VertexBuffer 
	{
	public:
		virtual ~VertexBuffer() = default;

		virtual void Bind() = 0;
		virtual void Unbind() = 0;

		virtual uint32_t GetSize() const = 0;
		
		virtual void SetVertexBufferLayout(VertexBufferLayout& bufferLayout) = 0;
		
		static VertexBuffer* Create(const void* vertices, U32 size);
	};
}