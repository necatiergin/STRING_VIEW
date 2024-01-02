#include <string>
#include <string_view>
#include <iostream>

int main()
{
	std::string_view sv;
	std::string str{ "necati" };

	sv = str;
	sv = str.operator std::basic_string_view<char, std::char_traits<char>>();
	std::cout << "sv.length() = " << sv.length() << "\n";
	std::cout << "sv = " << sv << "\n";
}

/*
	std::string sınıfının std::string_view sınıfına otomatik dönüşüm yapacak (explicit olmayan)
	operator std::string_view tür dönüştürme operatör fonksiyonu var.
*/
