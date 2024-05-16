//the get functions of a class returning std::string_view may lead to undefined behavior

#include <string>
#include <string_view>
#include <iostream>

class Person {
	std::string name_;
public:
	Person(std::string name) : name_{ std::move(name) } {}
	std::string_view getName() const
	{
		// don't do this
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
