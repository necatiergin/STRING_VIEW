#include <string_view>

int main()
{
  //sınıfın std::nullptr_t parametreli ctor'ı delete edilmiş durumda.
	std::string_view sv{ nullptr };
}
