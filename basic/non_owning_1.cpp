#include <cstring>
#include <iostream>
#include <string_view>

int main()
{
	char s[]{ "choose" };

	std::string_view sv{s};

	std::cout << "[" << sv << "]\n";
	s[2] = 'e';
	s[3] = 'e';
	std::cout << "[" << sv << "]\n";
}
