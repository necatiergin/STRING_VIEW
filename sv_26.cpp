#include <iostream>
#include <string_view>

int main()
{
	auto p = new std::string{ "necati ergin" };

	std::string_view sv{ *p };

	std::cout << sv << '\n';
	delete p;
	std::cout << sv << '\n'; //ub
}
