#include <string_view>
#include <iostream>

int main()
{
	std::string str{ "necati ergin" };

	std::string_view sw{ str };
	std::cout << "[" << sw << "]\n";
	str.front() = 'X';
	str.back() = 'X';
	std::cout << "[" << sw << "]\n";
	str.append(500, 'A');
	std::cout << "[" << sw << "]\n"; 
}
