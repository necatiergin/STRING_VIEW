#include <string_view>
#include <iostream>

// generic concatenation:
template<typename T>
T concat(const T& x, const T& y) 
{
	return x + y;
}

std::string operator+ (std::string_view sv1, std::string_view sv2) 
{
	return std::string(sv1) + std::string(sv2);
}

int main()
{
	std::string_view sv = "Merhaba";
	auto val = concat(sv, sv); 
	std::cout << val << '\n'; 
}
