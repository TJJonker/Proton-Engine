#pragma once
#include "Rendering/VertexBuffer/VertexBuffer.h"
#include "Rendering/IndexBuffer/IndexBuffer.h"

namespace Proton::Rendering {
	class VertexArray
	{
	public:
		virtual ~VertexArray() = default;
		
		virtual void Bind() = 0;
		virtual void Unbind() = 0;

		virtual void AddVertexBuffer(const VertexBuffer& vertexBuffer) = 0;
		virtual void AddIndexBuffer(const IndexBuffer& indexBuffer) = 0;

		static VertexArray* Create();
	};
}
