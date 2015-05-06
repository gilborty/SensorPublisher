#pragma once

// Includes
#include <memory>
#include <iostream>
#include <exception>
#include <unordered_map>
#include <string>
#include <vector>
#include <chrono>
#include <atomic>
#include <functional>
#include <sstream>

#include <stdint.h>
#include <signal.h>
#include <unistd.h>

#include <easylogging.h>

namespace util
{
	// Correlary to make_shared
	template<typename T, typename ...Args>
	std::unique_ptr<T> make_unique( Args&& ...args )
	{
		return std::unique_ptr<T>( new T( std::forward<Args>(args)... ) );
	}
}
