#pragma once
#include "Rendering/Renderer/VertexManipulator.h"
#include "Rendering/Renderer/Renderable/Renderable.h"

namespace Proton::Rendering {
	class Batcher
	{
		void Add(const Renderable& renderable, const M44& transformMatrix);
	};
}
