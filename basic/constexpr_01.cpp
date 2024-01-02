#include <string_view>
#include <iostream>

int main()
{
	constexpr auto sv = std::string_view{ "necati ergin" };
	constexpr auto len = sv.length();
	constexpr auto cfirst = sv.front();
	constexpr auto clast = sv.back();
	constexpr auto idx1 = sv.find('i');
	constexpr auto idx2 = sv.find_first_of("aeoui");
	constexpr auto iter = sv.begin();
	constexpr auto svx = sv.substr(0, 6);
}



