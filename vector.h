#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>
#include <iostream>


template<class T>
class vector
{
public:
	//create empty vector
	vector();

	//create vector from initializer_list
	vector(const std::initializer_list<T>& l);

	//create vector size = 'vector_size' and fill it 'fill_num'
	vector(const int vector_size, const T fill_num);

	//get size of vector
	size_t Size() const;

	//print vector
	void print_vector();


	~vector();
private:
	T* data;

	size_t size;

};

template<class T>
vector<T>::vector(const int vector_size, const T fill_num)
{
	size = vector_size;
	data = new T[size];
	for (auto i = 0; i != size; i++)
	{
		data[i] = fill_num;
	}
}



template<class T>
void vector<T>::print_vector() 
{
	for (int i = 0; i != size; i++)
	{
		std::cout << *(data + i) << ' ';
	}
	std::cout << std::endl;
}	

template<class T>
size_t vector<T>::Size() const
{
	return size;
}

template<class T>
vector<T>::vector(const std::initializer_list<T>& l)
{
	data = new T[l.size()];
	int j = 0;
	for (auto i = l.begin(); i != l.end(); i++)
	{
		*(data + j++) = *i;
	}
	size = l.size();
}

template<class T>
vector<T>::vector()
{
	data = nullptr;
	size = 0;
}

template<class T>
vector<T>::~vector()
{
	delete[] data;
}

#endif // VECTOR_H
