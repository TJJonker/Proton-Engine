#pragma once

namespace Proton::Rendering {
	enum class TextureWrapFunction {
		CLAMP_TO_EDGE,
		CLAMP_TO_BORDER,
		MIRRORED_REPEAT,
		REPEAT,
		MIRROR_CLAMP_TO_EDGE
	};
}