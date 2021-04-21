#include <iostream>
#include <string>

template <typename T>
void	swap(T & a, T & b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T&	min(const T& x, const T& y) {
	return (x < y) ? x : y;
}

template <typename T>
const T&	max(const T& x, const T& y) {
	return (x > y) ? x : y;
}

template <typename T>
void	test_swap(T & a, T & b) {
	std::cout << "##### Testing swap() #####\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "Swapping values\n";
	::swap(a, b);
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
}

template <typename T>
void	test_min(const T & a, const T & b) {
	std::cout << "##### Testing min() #####\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "min(a, b) = " << ::min(a, b) << "\n";
}

template <typename T>
void	test_max(const T & a, const T & b) {
	std::cout << "##### Testing max() #####\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	std::cout << "max(a, b) = " << ::max(a, b) << "\n";
}

template <typename T>
void	test_all(T & a, T & b) {
	test_swap(a, b);
	test_min(a, b);
	test_max(a, b);
}

int	main() {
	{
		std::cout << "##### Testing <int> type #####\n";
		int	a = 0;
		int	b = 42;
		test_all(a, b);
	}
	{
		std::cout << "\n##### Testing <std::string> type #####\n";
		std::string a = "hello";
		std::string b = "world";
		test_all(a, b);
	}
	std::cout << "\n##### Tests from the subject #####\n";
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
}
