#pragma once
#include "PCommon.h"
#include "Rendering/VertexBuffer/VertexBufferLayoutElement.h"

namespace Proton::Rendering {
	class VertexBufferLayout {
		using Elements = std::vector<VertexBufferLayoutElement>;
		using InitializedElements = std::initializer_list<VertexBufferLayoutElement>;

	public:
		Elements m_Elements;
		U8 m_Stride;

	public:
		VertexBufferLayout(InitializedElements elements);

		Elements::const_iterator begin() const { return m_Elements.begin(); }
		Elements::const_iterator end() const { return m_Elements.end(); }
		inline U8 GetStride() const { return m_Stride; }

	private:
		void CalculateStrideAndOffset(Elements elements);
	};
}