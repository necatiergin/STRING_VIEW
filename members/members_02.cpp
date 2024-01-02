#include <iostream>
#include <string_view>

int main()
{
	std::string_view sw{ "The good the bad and the ugly" };

	std::cout << std::boolalpha;

	std::cout << sw.length() << "\n"; //29
	std::cout << sw.substr(0, sw.find(' ')) << '\n'; // The
	std::cout << (sw == "The poor") << "\n"; //false

	std::cout << sw.starts_with("The") << "\n"; //true
	std::cout << sw.ends_with("pretty") << "\n";  //false

	std::cout << "[" << sw << "]";
}
