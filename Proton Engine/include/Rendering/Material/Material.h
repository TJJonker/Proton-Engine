#pragma once
#include "Rendering/Texture/Texture.h"
#include "Rendering/Shader/Shader.h"

namespace Proton::Rendering {
	struct Material {
		Shader* Shader;
		Texture* Normal;
		Texture* Albedo;
		Texture* Metallic;
		Texture* Height;
	};
}