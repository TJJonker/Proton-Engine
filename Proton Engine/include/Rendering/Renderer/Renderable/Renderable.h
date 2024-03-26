#pragma once
#include "PCommon.h"
#include "Rendering/Material/Material.h"

namespace Proton::Rendering {

	struct Renderable {
		const U8 Configs;
		const Material* Material;
		const void* Data;
		const U32 DataSize;

		Renderable(const Rendering::Material* material, const void* data, const U32 dataSize, U8 configs = 0) 
			: Material(material), Data(data), DataSize(dataSize), Configs(configs) { }
	};
}