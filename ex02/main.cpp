#include <iostream>
#include <exception>
#include <string>
#include "Array.tpp"

template <typename T>
void	print_array(const Array<T> & arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i];
		if (i < arr.size() - 1) {
			std::cout << ", ";
		}
	}
	std::cout << "\n";
}

template <typename T>
void	test_invalid_index(Array<T> & arr, int index, T value) {
	try {
		std::cout << "Assigning (" << value << ") at index " << index <<
			". Array size is equal to " << arr.size() << "\n";
		arr[index] = value;
	}
	catch (const std::out_of_range e) {
		std::cout << e.what() << "\n";
	}
}

template <typename T>
void	test_assign(Array<T> & arr, T value) {
	for (unsigned i = 0; i < arr.size(); i++) {
		arr[i] = value;
	}
}

template <typename T>
void	test_array(T assign_value) {
		std::cout << "##### Testing array #####\n";
		Array<T> arr(5);

		std::cout << "Array size: " << arr.size() << "\n";
		print_array(arr);
		test_assign(arr, assign_value);
		print_array(arr);
		test_invalid_index(arr, -1, assign_value);
		test_invalid_index(arr, arr.size(), assign_value);

		Array<T> zero_size_array(0);
		test_invalid_index(
						zero_size_array, zero_size_array.size(), assign_value);

		Array<T>  no_param_array;
		test_invalid_index(
						no_param_array, no_param_array.size(), assign_value);
		std::cout << "\n";
}

int	main() {
	test_array(int(42));
	test_array(std::string("42"));
	test_array(double(42.0));
}
