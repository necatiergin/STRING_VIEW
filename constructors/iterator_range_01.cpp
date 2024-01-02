#include <iostream>
#include <string_view>
#include <vector>

int main()
{
	using namespace std;

	string str{ "necati ergin" };
	vector<char> cvec{ 's', 't', 'r', 'o', 'u', 's', 't', 'r', 'u', 'p' };

	string_view sv1{ str.begin(), str.end() }; //C++20
	cout << sv1 << '\n';
	string_view sv2{ cvec.begin(), cvec.end() }; //C++20
	cout << sv2 << '\n';
}
