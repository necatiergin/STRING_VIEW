#include <iostream>
#include <string_view>

int main()
{
	std::string_view str{ "life is very short" };
	std::cout << str.starts_with("life") << '\n';
	std::cout << str.starts_with("time") << '\n';
	std::cout << str.ends_with("short") << '\n';
	std::cout << str.ends_with("long") << '\n';
}
