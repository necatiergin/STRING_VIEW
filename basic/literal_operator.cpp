#include <string_view>
#include <iostream>

int main()
{
	using namespace std::literals;

	std::string_view sv1 = "abc\0\0def";
	std::string_view sv2 = "abc\0\0def"sv;

	std::cout << "sv1: " << sv1.size() << " (" << sv1 << ")\n";
	std::cout << "sv2: " << sv2.size() << " (" << sv2 << ")\n";
}

/*
	std::string_view user defined literals
	son ek olarak sv kullanılıyor
*/
