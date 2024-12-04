#include <string_view>
#include <iostream>
#include <string>

int main()
{
	std::cout << "sizeof (string) = " << sizeof(std::string) << '\n';
	std::cout << "sizeof (char *) = " << sizeof(char*) << '\n';
	std::cout << "sizeof (size_t) = " << sizeof(std::size_t) << '\n';
	std::cout << "sizeof (string_view) = " << sizeof(std::string_view) << '\n';
}

/*
	A std::string_view object actually holds 2 pointer variables (or one pointer variable and one integer).
	Thus, it can access a part of a substring that is owned by another code for reading (read-only) purposes.
*/
