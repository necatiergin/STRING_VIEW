#include <string_view>
#include <iostream>
#include <string>


int main()
{
	std::cout << "sizeof (string) = " << sizeof(std::string) << '\n';
	std::cout << "sizeof (char *) = " << sizeof(char*) << '\n';
	std::cout << "sizeof (size_t) = " << sizeof(std::size_t) << '\n';
	std::cout << "sizeof (string_view) = " << sizeof(std::string_view) << '\n';
}

/*
	bir std::string_view nesnesi aslında 2 pointer değişken (ya da bir pointer değişken bir de tamsayı) tutar.
	Böylece mülkiyeti bir başka kodda olan bir yazının bir parçasına (substring) okuma amaçlı erişebilir.
*/
