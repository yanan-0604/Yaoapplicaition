#include "Vector.h"
#include<crtdbg.h>
namespace Yao {
	template<class T>
	void Vector<T>::ReCapacity(size_t newcapacity)
	{
		T* newValue = new T[newcapacity];
		for (size_t i = 0; i < m_Size; ++i)
		{
			 newValue[i]=m_Value[i]  ;
		}
		delete[] m_Value;
		m_Value = newValue;
		m_Capacity = newcapacity;
	}


	template<class T>
	T& Vector<T>::operator[](size_t index)
	{
		return m_Value[index];
	}


	template<class T>
	size_t Vector<T>::Size()
	{
		return m_Size;
	}


	template<class T>
	Vector<T>::Vector()
		:m_Size(0),m_Value(nullptr),m_Capacity(1)
	{
		
		ReCapacity(m_Capacity);
	}


	template<class T>
	Vector<T>::Vector(size_t Size)
		:m_Size(Size)
	{
		m_Capacity = m_Size;
		ReCapacity(m_Capacity);
	}

	template<class T>
	Vector<T>::~Vector()
	{
		delete[] m_Value;
	}


	template<class T>
	void Vector<T>::push(size_t index, T value)
	{
		if (index < 0 or index >= m_Size)
		{
			_ASSERTE("index>0 and index<m_Size ");
		}
		else
		{

		}
	}


	template<class T>
	void Vector<T>::pop(size_t index)
	{

	}
	template class Yao::Vector<int>;
}