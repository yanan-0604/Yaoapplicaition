#include "Time.h"
#ifdef _DEBUG
namespace Yao {
	Time::Time()
	{
		Reset();
	}
	void Time:: Reset()
	{
		m_Start = std::chrono::high_resolution_clock::now();
	}
	float Time::Usingtime()
	{
		return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.001f * 0.001f * 0.001f;
	}
}
#endif