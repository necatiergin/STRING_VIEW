//C++17 - Nicolai Jossutis kitabındaki ornekten uyarlanmistir

#include <optional>
#include <string_view>
#include <charconv> // for from_chars()
#include <iostream>

// string'i (mumkunse) int turune donustur
//from_chars C++17
//std::optional C++17

std::optional<int> asInt(std::string_view sv)
{
	int val;
	// read character sequence into the int:
	auto [ptr, ec] = std::from_chars(sv.data(), sv.data() + sv.size(), val);
	// if we have an error code, return no value:

	if (ec != std::errc{})
		return std::nullopt;

	return val;
}

int main()
{
	for (auto s : { "42", " 077", "hello", "0x33" }) {
		// s'i int'e donustur
		std::optional<int> oi = asInt(s);
		if (oi) {
			std::cout << "(" << s << ") yazisindan elde edilen tamsayi : " << *oi << "\n";
		}
		else {
			std::cout << "(" << s << ") yazisindan tamsayi elde edilemiyor\n";
		}
	}
}
