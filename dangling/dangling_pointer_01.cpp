//sınıfın get fonksiyonlarının std::string_view döndürmesi tanımsız davranışa yol açabilir

#include <string>
#include <string_view>
#include <iostream>

class Person {
	std::string name_;
public:
	Person(std::string name) : name_{ std::move(name) } {}
	std::string_view getName() const
	{
		// bunu yapmayin
		return name_;
	}
};

Person createPerson()
{
	Person p{ "necati ergin" };
	//
	return p;
}

int main()
{
	auto sv = createPerson().getName();

	//dangling pointer
	std::cout << sv << "\n";
}
