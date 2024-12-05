//std::string class has an explicit constructor with a string_view parameter

#include <string_view>
#include <string>
#include <iostream>

std::string func(std::string_view sv)
{
	//return sv; //invalid
	//return std::string{ sv }; //valid
	return sv.data(); //valid
}

void foo(std::string);

int main()
{
	std::string_view sw("necati ergin");

	//std::string str = sw; //invalid (explicit ctor)
	std::string str{ sw }; //valid
	std::string s = sw.data(); //valid
	//foo(sw); //invalid
	foo(std::string{ sw }); //valid
	foo(sw.data()); //valid
}
