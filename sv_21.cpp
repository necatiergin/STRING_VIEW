/*
	When using the string_view class, you should pay attention to situations that will create undefined behavior.
	The address(es) held by the string_view object may refer to an object whose life has ended.
*/

#include <string>
#include <iostream>
#include <string_view>

std::string getstr(int ival)
{
	return std::to_string(ival);
}

int main()
{
	int ival;
	std::cout << "enter an integer: ";
	std::cin >> ival;

	//auto &s1 = getstr(ival);  //invalid
	const auto& s2 = getstr(ival); //life extension
	auto&& s3 = getstr(ival); //life extension
	const char* p1 = getstr(ival).c_str();  //ub
	auto p2 = getstr(ival).c_str(); //ub
	std::string_view s = getstr(ival); //ub

	std::cout << "(" << s << ")\n";
}
