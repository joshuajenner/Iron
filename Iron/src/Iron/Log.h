#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Iron {

	class IRON_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger(){ return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger(){ return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}


// The reason we use macros instead of regular functions is because
// we want to be able to strip out these lines of code in distrubtion builds
// we can redefine these macros to nothing

// Core Log Macros
#define IRN_CORE_TRACE(...) ::Iron::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define IRN_CORE_INFO(...)  ::Iron::Log::GetCoreLogger()->info(__VA_ARGS__)
#define IRN_CORE_WARN(...)  ::Iron::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define IRN_CORE_ERROR(...) ::Iron::Log::GetCoreLogger()->error(__VA_ARGS__)
#define IRN_CORE_FATAL(...) ::Iron::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client Log Macros
#define IRN_TRACE(...)		::Iron::Log::GetClientLogger()->trace(__VA_ARGS__)
#define IRN_INFO(...)		::Iron::Log::GetClientLogger()->info(__VA_ARGS__)
#define IRN_WARN(...)		::Iron::Log::GetClientLogger()->warn(__VA_ARGS__)
#define IRN_ERROR(...)		::Iron::Log::GetClientLogger()->error(__VA_ARGS__)
#define IRN_FATAL(...)		::Iron::Log::GetClientLogger()->fatal(__VA_ARGS__)