#include "ppch.h"
#include "Rendering/Renderer/VertexManipulator.h"

namespace Proton::Rendering {
	void VertexManipulator::Process(V3* storage, const V3* data, const U32& size, const M44& transformationMatrix)
	{
		for (int i = 0; i < size; i++) 
			*(storage + i) = V4(*(data + i), 0) * transformationMatrix;
	}
}