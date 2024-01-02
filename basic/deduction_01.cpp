#include <iostream>
#include <string_view>
#include <type_traits>
#include <string>

template <typename T>
void func(T x)
{
	std::cout << "is T const char* : " << std::is_same_v<decltype(x), const char*> << "\n";
	std::cout << "is T string      : " << std::is_same_v<decltype(x), std::string> << "\n";
	std::cout << "is T string_view : " << std::is_same_v<decltype(x), std::string_view> << "\n";
	std::cout << "--------------------------\n";
}

int main()
{
	using namespace std::literals;

	std::cout << std::boolalpha;
	char str[] = "ali";

	func(str);
	func("ali");
	func("ali"s);
	func("ali"sv);
}
