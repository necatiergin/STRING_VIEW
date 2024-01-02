/*
	string_view sınıfını kullanırken tanımsız davranış olusturacak durumlara dikkat edilmeli
	string_view nesnesinin tuttugu adres(ler) hayatı bitmis bir nesneye iliskin olabilir.
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
	std::cout << "bir tamsayi girin: ";
	std::cin >> ival;

	//auto &s1 = getstr(ival);  //gecersiz
	const auto& s2 = getstr(ival); //life extension
	auto&& s3 = getstr(ival); //life extension
	const char* p1 = getstr(ival).c_str();  //ub
	auto p2 = getstr(ival).c_str(); //ub
	std::string_view s = getstr(ival); //ub

	std::cout << "(" << s << ")\n";
}
