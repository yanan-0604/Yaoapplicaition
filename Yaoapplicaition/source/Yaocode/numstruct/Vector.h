#pragma once

namespace Yao {
	template<class T>
	class Vector
	{
	public:
		Vector(size_t size);
		Vector();
		~Vector();

		void push(size_t index, T value);
		void pop(size_t index);

		size_t Size();
		T& operator[](size_t index);
		
	private:
		void ReCapacity(size_t newcapacity);
		T *m_Value;
		size_t m_Size;
		size_t m_Capacity;
	};
}

