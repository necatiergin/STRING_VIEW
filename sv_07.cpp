#include <iostream>
#include <string_view>
#include <vector>

int main()
{
	std::string str{ "necati ergin" };
	std::vector<char> cvec{ 's', 't', 'r', 'o', 'u', 's', 't', 'r', 'u', 'p' };

	std::string_view sv1{ str.begin(), str.end() }; //C++20
	std::cout << sv1 << '\n';
	std::string_view sv2{ cvec.begin(), cvec.end() }; //C++20
	cout << sv2 << '\n';
}
