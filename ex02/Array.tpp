#ifndef ARRAY_TPP_
#define ARRAY_TPP_
#include <stdexcept>
#include <string>

template <typename T>
class Array {
 public:
					Array();
					Array(const Array& src);
	explicit		Array(unsigned int n);
					~Array();
	Array&			operator=(const Array& rhs);
	T&				operator[](int index);
	const T&		operator[](int index) const;
	unsigned int	size() const;

 private:
	unsigned int	_size;
	T				*_data;
};

template <typename T>
Array<T>::Array() : _size(0), _data(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n),
									_data(_size ? new T[_size]() : 0) {
}

template <typename T>
Array<T>::Array(const Array& src) : _size(src._size),
									_data(_size ? new T[_size] : 0) {
	for (unsigned int i = 0; i < _size; i++) {
		_data[i] = src._data[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] _data;
}

template <typename T>
Array<T>&		Array<T>::operator=(const Array& rhs) {
	if (this != &rhs) {
		T*	data = rhs._size ? new T[rhs.size] : 0;

		for (unsigned int i = 0; i < rhs._size; i++) {
			data[i] = rhs._data[i];
		}
		delete _data;
		_data = data;
		_size = rhs.size;
	}
	return *this;
}

template <typename T>
T&				Array<T>::operator[](int index) {
	if (index < 0 || static_cast<unsigned int>(index) >= _size) {
		throw std::out_of_range(
						std::string("Index is out of valid index range"));
	}
	return _data[index];
}

template <typename T>
const T&		Array<T>::operator[](int index) const {
	if (index < 0 || static_cast<unsigned int>(index) >= _size) {
		throw std::out_of_range(
							std::string("Index is out of valid index range"));
	}
	return _data[index];
}

template <typename T>
unsigned int	Array<T>::size() const {
	return _size;
}

#endif  // ARRAY_TPP_
