#pragma once
#include "PCommon.h"
#include "Rendering/VertexBuffer/VertexBufferLayoutElement.h"

namespace Proton::Rendering {
	class VertexBufferLayout {
		using Elements = std::vector<VertexBufferLayoutElement>;

	public:
		std::vector<VertexBufferLayoutElement> m_Elements;
		uint8_t m_Stride;

	public:
		VertexBufferLayout(std::initializer_list<VertexBufferLayoutElement> elements);

		Elements::const_iterator begin() const { return m_Elements.begin(); }
		Elements::const_iterator end() const { return m_Elements.end(); }
		inline uint8_t GetStride() const { return m_Stride; }

	private:
		void CalculateStrideAndOffset(Elements elements);
	};
}