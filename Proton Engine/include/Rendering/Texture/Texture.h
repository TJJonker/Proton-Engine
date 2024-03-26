#pragma once
#include "PCommon.h"
#include "Rendering/Texture/TextureChannels.h"
#include "Rendering/Texture/TextureConfigs.h"

namespace Proton::Rendering {
	class Texture
	{
		virtual ~Texture() = default;

		virtual void Bind() = 0;
		virtual void Unbind() = 0;

		virtual void Resize(U16 width, U16 height) = 0;

		static Texture* Create(U16 width, U16 height, TextureChannels channels, const void* data, TextureConfigs configs = TextureConfigs());
	};
}