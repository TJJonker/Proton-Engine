#pragma once
#include <PCommon.h>

namespace Proton::Rendering {
	class VertexManipulator
	{
	public:
		static void Process(V3* storage, const V3* data, const U32& size, const M44& transformationMatrix);
	};
}
