#include <string_view>
#include <string>
#include <iostream>

std::string func(std::string_view sv)
{
	//return sv; //gecersiz
	//return std::string{ sv }; //gecerli
	return sv.data(); //gecerli
}

void foo(std::string);

int main()
{
	std::string_view sw("necati ergin");

	//std::string str = sw; //gecersiz (explicit ctor)
	std::string str{ sw }; //gecerli
	std::string s = sw.data(); //gecerli
	//foo(sw); //gecersiz
	foo(std::string{ sw }); //gecerli
	foo(sw.data()); //gecerli
}
