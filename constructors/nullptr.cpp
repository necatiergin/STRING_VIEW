#include <string_view>

int main()
{
  	//the constructor with std::nullptr_t parameter is deleted.
	std::string_view sv{ nullptr };
}
