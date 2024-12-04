#include <cstring>
#include <iostream>
#include <string_view>

int main()
{
	std::string_view str{ "programming" };

	str.remove_prefix(3);
	str.remove_suffix(4);

	std::cout << "the length of " << str << " is " << std::strlen(str.data()) << '\n';
	std::cout << "the length of " << str << " is " << str.length() << '\n';
	std::cout << "str.data() is " << str.data() << '\n';
	std::cout << "str is [" << str << "]\n";
}
