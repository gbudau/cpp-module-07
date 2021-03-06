#include <iostream>
#include <string>

template <typename T>
void	iter(const T* tab, size_t len, void (* func)(const T&)) {
	for (size_t i = 0; i < len; i++) {
		func(tab[i]);
	}
}

template <typename T>
void	print_item(const T& item) {
	std::cout << item << "\n";
}

int	main() {
	std::string	fruits[] = {
					"Grapefruit", "Pineapple", "Blueberries", "Apple", "Mango"};
	int			numbers[] = {4, 8, 15, 16, 23, 42};

	::iter(fruits, sizeof(fruits) / sizeof(fruits[0]), &print_item);
	std::cout << "\n";
	::iter(numbers, sizeof(numbers) / sizeof(numbers[0]), &print_item);
}
