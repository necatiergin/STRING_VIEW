#include <string>
#include <string_view>
#include <iostream>

int main()
{
	std::string_view sv;
	std::string str{ "necati" };

	sv = str;
	sv = str.operator std::basic_string_view<char, std::char_traits<char>>();
	std::cout << "sv.length() = " << sv.length() << '\n';
	std::cout << "sv = " << sv << '\n';
}

/*
	std::string class has a non-explicit type-cast operator function 
        that converts a std:.string to std::string_view
*/
