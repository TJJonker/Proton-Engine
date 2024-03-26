#pragma once
#include "PCommon.h"
#include "Rendering/Texture/MinifyingFunction.h"
#include "Rendering/Texture/MagnifyingFunction.h"
#include "Rendering/Texture/TextureWrapFunction.h"

namespace Proton::Rendering {
	struct TextureConfigs {
		
		MinifyingFunction MinFunction = MinifyingFunction::LINEAR;
		MagnifyingFunction MagFuncton = MagnifyingFunction::LINEAR;

		TextureWrapFunction TextureWrapFunctionS = TextureWrapFunction::REPEAT;
		TextureWrapFunction TextureWrapFunctionT = TextureWrapFunction::REPEAT;
		TextureWrapFunction TextureWrapFunctionR = TextureWrapFunction::REPEAT;
	};
}