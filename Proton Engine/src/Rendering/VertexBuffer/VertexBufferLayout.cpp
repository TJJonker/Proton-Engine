#include "ppch.h"
#include "Rendering/VertexBuffer/VertexBufferLayout.h"

namespace Proton::Rendering {
	VertexBufferLayout::VertexBufferLayout(std::initializer_list<VertexBufferLayoutElement> elements)
		: m_Stride(0)
	{
		CalculateStrideAndOffset(elements);
	}

	void VertexBufferLayout::CalculateStrideAndOffset(Elements elements)
	{
		m_Stride = 0;
		for (VertexBufferLayoutElement element : elements) {
			element.Offset = m_Stride;
			m_Elements.push_back(element);
			m_Stride += VertexBufferLayoutElement::GetDataSize(element.Type) * element.Count;
		}
	}


}