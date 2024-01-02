#include <string_view>
#include <iostream>
#include <array>

int main()
{
	char str[] = "Bjarne Stroustrup";
	std::string s{ "cpp is the best programming language" };
	std::array<char, 6> ar{ 'n', 'e', 'c', 'a', 't', 'i' };

	std::string_view sv1;
	std::cout << "(sv1.length : " << sv1.length() << ")    |" << sv1 << "|\n";

	std::string_view sv2 = "Necati Ergin";
	std::cout << "(sv2.length : " << sv2.length() << ")   |" << sv2 << "|\n";

	std::string_view sv3{ str, 6 };
	std::cout << "(sv3.length : " << sv2.length() << ")   |" << sv3 << "|\n";

	std::string_view sv4{ s };
	std::cout << "(sv4.length : " << sv4.length() << ")   |" << sv4 << "|\n";

	std::string_view sv5{s.data() + 11, 4 };
	std::cout << "(sv5.length : " << sv5.length() << ")    |" << sv5 << "|\n";

	std::string_view sv6{ar.data(), size(ar) };
	std::cout << "(sv6.length : " << sv6.length() << ")    |" << sv6 << "|\n";

	std::string_view sv7{ str, str + 3 };
	std::cout << "(sv7.length : " << sv7.length() << ")    |" << sv7 << "|\n";
}
