#include <iostream>
#include <string_view>
#include <string>

int main()
{
	std::string str{ "   basimda bir bosluk hissi var" };
	std::string_view sv{ str };

	sv.remove_prefix(std::min(sv.find_first_not_of(" "), sv.size()));

	std::cout << "(" << str << ")\n";
	std::cout << "(" << sv << ")\n";
}


/*
	remove_prefix ve remove_suffix işlevleri görüntülenen aralığı daraltmak için
*/
