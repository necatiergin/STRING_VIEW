#include <iostream>
#include <string_view>


int main()
{
	using namespace std;

	string_view str{ "life is very short" };

	cout << str.starts_with("life") << '\n';
	cout << str.starts_with("time") << '\n';
	cout << str.ends_with("short") << '\n';
	cout << str.ends_with("long") << '\n';
}
