#include <iostream>
#include <string_view>

int main()
{
	using namespace std;

	auto p = new string{ "necati ergin" };

	string_view sv{ *p };

	cout << sv << '\n';
	delete p;
	cout << sv << '\n'; //ub
}
