#pragma once
#include<Yaocode/core.h>
#include<chrono>
#ifdef _DEBUG
namespace Yao {
	class Time
	{
	public:
		Time();
		void Reset();
		float Usingtime();

	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
	};
}
#endif

