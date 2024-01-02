#include <string_view>
#include <iostream>

int main()
{
	std::cout.setf(std::ios::boolalpha);

	std::string_view sv;
	std::cout << "sv.data() == nullptr : " << (sv.data() == nullptr) << '\n';
	std::cout << "sv.empty()           : " << sv.empty() << "\n";
	std::cout << "sv.size() == 0       : " << (sv.size() == 0) << "\n";
	sv = "ali";
	std::cout << "sv.data() == nullptr : " << (sv.data() == nullptr) << '\n';
	std::cout << "sv.empty()           : " << sv.empty() << "\n";
	std::cout << "sv.size() == 0       : " << (sv.size() == 0) << "\n";
}

/*
	- varsayılan kurucu işlevle oluşturulmuş bir string_view nesnesi boştur.
	- data üye işlevi nullptr değerini döndürür
	- size üye işlevi 0 değerini döndürür.
	- empty üye işlevi true değerini döndürür.
*/
