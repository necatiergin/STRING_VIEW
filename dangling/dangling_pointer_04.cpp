#include <iostream>
#include <string_view>
#include <algorithm>

std::string_view get_reverse(std::string str)
{
	reverse(begin(str), end(str));

	return str;
}

int main()
{
	auto s = get_reverse("necati ergin");

	std::cout << s << '\n';
}
