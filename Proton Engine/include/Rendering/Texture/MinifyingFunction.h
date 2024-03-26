#pragma once

namespace Proton::Rendering {
	enum class MinifyingFunction {
		LINEAR,
		NEAREST,
		NEAREST_NEAREST_MIPMAP,
		LINEAR_NEAREST_MIPMAP,
		NEAREST_LINEAR_MIPMAP,
		LINEAR_LINEAR_MIPMAP
	};
}