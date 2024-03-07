#pragma once
#include <vector>
#include <glad/glad.h>
#include "Rendering/VertexBufferLayoutElement.h"
#include "Debugging/Assertion.h"

namespace Proton::Rendering {
	class VertexBufferLayout {
	public:
		std::vector<VertexBufferLayoutElement> m_Elements;
		uint8_t m_Stride;

	public:
		VertexBufferLayout() : m_Stride(0) { }

		template<typename T>
		void Push(uint8_t count) {
			ASSERT(false);
		}

		template<>
		void Push<unsigned int>(uint8_t count) {
			m_Elements.push_back({GL_UNSIGNED_INT, count, m_Stride});
			m_Stride += sizeof(unsigned int) * count;
		}

		template<>
		void Push<float>(uint8_t count) {
			m_Elements.push_back({ GL_FLOAT, count, m_Stride });
			m_Stride += sizeof(float) * count;
		}

		inline const std::vector<VertexBufferLayoutElement> GetLayoutElements() const { return m_Elements; }
		inline uint8_t GetStride() const { return m_Stride; }
	};
}