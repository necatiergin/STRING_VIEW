/*
	remove_suffix member function narrows view span
*/


#include <iostream>
#include <string_view>

int main()
{
	char ar[] = { 'a', 'b', 'c', 'd', '\0', '\0', '\0' };

	std::string_view sv(ar, sizeof ar);
	auto trim_idx = sv.find('\0');
	std::cout << "trim_idx = " << trim_idx << '\n';

	if (trim_idx != sv.npos)
		sv.remove_suffix(sv.size() - trim_idx);

	std::cout << "string in array (" << ar << "), size of array = " << sizeof ar << '\n';
	std::cout << "string in sv (" << sv << "), length of the string = " << sv.size() << '\n';
}
