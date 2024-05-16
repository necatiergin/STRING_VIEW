#include <iostream>
#include <string_view>

int main()
{
	char s[]{ 'n', 'e', 'c', 'o' };

	std::string_view sv{ s, 4 };  //data ctor

	std::cout << sv << '\n'; //no problem
	std::cout << sv.data() << '\n'; //ub
}
