#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Zero {

	class ZERO_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core Log macros
#define Z_CORE_TRACE(...)	::Zero::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define Z_CORE_INFO(...)	::Zero::Log::GetCoreLogger()->info(__VA_ARGS__)
#define Z_CORE_WARN(...)	::Zero::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define Z_CORE_ERROR(...)	::Zero::Log::GetCoreLogger()->error(__VA_ARGS__)
#define Z_CORE_FATAL(...)	::Zero::Log::GetCoreLogger()->fatal(__VA_ARGS__)


#define Z_TRACE(...)		::Zero::Log::GetClientLogger()->trace(__VA_ARGS__)
#define Z_INFO(...)			::Zero::Log::GetClientLogger()->info(__VA_ARGS__)
#define Z_WARN(...)			::Zero::Log::GetClientLogger()->warn(__VA_ARGS__)
#define Z_ERROR(...)		::Zero::Log::GetClientLogger()->error(__VA_ARGS__)
#define Z_FATAL(...)		::Zero::Log::GetClientLogger()->fatal(__VA_ARGS__)