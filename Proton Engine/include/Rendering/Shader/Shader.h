#pragma once

#include "PCommon.h"

namespace Proton::Rendering {
	class Shader
	{
	public:
		virtual ~Shader() = default;

		virtual void Bind() = 0;
		virtual void Unbind() = 0;

		virtual void SetMatrix4(const char* name, M44& v0) = 0;
		virtual void SetVec3(const char* name, V3& v0) = 0;
		virtual void SetInt(const char* name, int v0) = 0;
		virtual void SetFloat(const char* name, float v0) = 0;

		static Shader* Create(const char* vertexShaderPath, const char* fragmentShaderPath);
	};
}
