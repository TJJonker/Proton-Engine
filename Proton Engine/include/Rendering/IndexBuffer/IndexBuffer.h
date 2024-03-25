#pragma once
#include "PCommon.h"

namespace Proton::Rendering {
	class IndexBuffer
	{
	public:
		virtual ~IndexBuffer() = default;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

		virtual U32 GetCount() const = 0;

		static IndexBuffer* Create(U32* indices, U32 size);
	};
}
