#pragma once
#pragma once

#ifdef PROTON_DEBUG
#include "spdlog/spdlog.h"
#include <memory>

namespace Proton {
	class Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

#define PROTON_CORE_TRACE(...) ::Proton::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PROTON_CORE_INFO(...)  ::Proton::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PROTON_CORE_WARN(...)  ::Proton::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PROTON_CORE_ERROR(...) ::Proton::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PROTON_CORE_FATAL(...) ::Proton::Log::GetCoreLogger()->critical(__VA_ARGS__)

#else
#define PROTON_CORE_TRACE(...) 
#define PROTON_CORE_INFO(...)  
#define PROTON_CORE_WARN(...)  
#define PROTON_CORE_ERROR(...) 
#define PROTON_CORE_FATAL(...)    
#endif