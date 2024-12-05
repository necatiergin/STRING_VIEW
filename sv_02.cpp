#include <iostream>
#include <string_view>

int main()
{
	std::string_view sv{ "The good the bad and the ugly" };

	std::cout << std::boolalpha;

	std::cout << sv.length() << '\n'; //29
	std::cout << sv.substr(0, sv.find(' ')) << '\n'; // The
	std::cout << (sv == "The poor") << '\n'; //false

	std::cout << sv.starts_with("The") << '\n'; //true
	std::cout << sv.ends_with("pretty") << '\n';  //false

	std::cout << "[" << sv << "]";
}
