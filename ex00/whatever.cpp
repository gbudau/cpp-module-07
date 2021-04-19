#include <iostream>
#include <string>

template <typename T>
void	swap(T & a, T & b) {
	T	temp;

	temp = a;
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

int	main() {
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
	{
		int	n1 = 0;
		int	n2 = 42;
		int	n3 = 42;

		std::cout << "\n##### Test swap() #####\n";
		std::cout << "n1 is: " << n1 << "\n";
		std::cout << "n2 is: " << n2 << "\n";
		std::cout << "Swapping values\n";
		::swap(n1, n2);
		std::cout << "n1 is: " << n1 << "\n";
		std::cout << "n2 is: " << n2 << "\n";

		std::cout << "\n";

		std::string	s1 = "hello";
		std::string	s2 = "world";
		std::string s3 = "world";

		std::cout << "s1 is: " << s1 << "\n";
		std::cout << "s2 is: " << s2 << "\n";
		std::cout << "Swapping values\n";
		::swap(s1, s2);
		std::cout << "s1 is: " << s1 << "\n";
		std::cout << "s2 is: " << s2 << "\n";

		std::cout << "\n";

		std::cout << "##### Test min() #####\n";
		std::cout << "n1 is: " << n1 << "\n";
		std::cout << "n2 is: " << n2 << "\n";
		std::cout << "n3 is: " << n3 << "\n";
		std::cout << "min(n1, n2) = " << ::min(n1, n2) << "\n";
		std::cout << "min(n1, n3) = " << ::min(n1, n3) << "\n";
		if (&::min(n1, n3) == &n1) {
			std::cout << "min(n1, n3) return n1\n";
		} else {
			std::cout << "min(n1, n3) return n3\n";
		}

		std::cout << "\n";

		std::cout << "s1 is: " << s1 << "\n";
		std::cout << "s2 is: " << s2 << "\n";
		std::cout << "s3 is: " << s3 << "\n";
		std::cout << "min(s1, s2) = " << ::min(s1, s2) << "\n";
		std::cout << "min(s1, s3) = " << ::min(s1, s3) << "\n";
		if (&::min(s1, s3) == &s1) {
			std::cout << "min(s1, s3) return s1\n";
		} else {
			std::cout << "min(s1, s3) return s3\n";
		}

		std::cout << "\n";

		std::cout << "##### Test max() #####\n";
		std::cout << "n1 is: " << n1 << "\n";
		std::cout << "n2 is: " << n2 << "\n";
		std::cout << "n3 is: " << n3 << "\n";
		std::cout << "max(n1, n2) = " << ::max(n1, n2) << "\n";
		std::cout << "max(n1, n3) = " << ::max(n1, n3) << "\n";
		if (&::max(n1, n3) == &n1) {
			std::cout << "max(n1, n3) return n1\n";
		} else {
			std::cout << "max(n1, n3) return n3\n";
		}

		std::cout << "\n";

		std::cout << "s1 is: " << s1 << "\n";
		std::cout << "s2 is: " << s2 << "\n";
		std::cout << "s3 is: " << s3 << "\n";
		std::cout << "max(s1, s2) = " << ::max(s1, s2) << "\n";
		std::cout << "max(s1, s3) = " << ::max(s1, s3) << "\n";
		if (&::max(s1, s3) == &s1) {
			std::cout << "max(s1, s3) return s1\n";
		} else {
			std::cout << "max(s1, s3) return s3\n";
		}
	}
}
