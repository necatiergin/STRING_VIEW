#include <string_view>
#include <iostream>

int main()
{
	std::cout.setf(std::ios::boolalpha);

	std::string_view sv;
	std::cout << "sv.data() == nullptr : " << (sv.data() == nullptr) << '\n';
	std::cout << "sv.empty()           : " << sv.empty() << '\n';
	std::cout << "sv.size() == 0       : " << (sv.size() == 0) << '\n';
	sv = "ali";
	std::cout << "sv.data() == nullptr : " << (sv.data() == nullptr) << '\n';
	std::cout << "sv.empty()           : " << sv.empty() << '\n';
	std::cout << "sv.size() == 0       : " << (sv.size() == 0) << '\n';
}

/*
	- a default constructed string_view object is empty.
	- member function data returns null pointer.
	- member function size returns 0.
	- member function empty returns true.
*/
