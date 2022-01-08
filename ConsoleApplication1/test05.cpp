#include <string>
#include <string.h>
int main()
{
	std::string s(1024, '*');
	const auto a = sizeof s;
	const auto b = s.length();
	const auto c = strlen(s.c_str());

}
