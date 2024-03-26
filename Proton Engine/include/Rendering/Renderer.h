#pragma once

namespace Proton::Rendering {
	class Renderer
	{
	private:
		static Renderer* s_Renderer;

	public:
		virtual void Initialize() = 0;

	};
}
