#include <string>
#include <crtdbg.h>
int main()
{
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
	char x[sizeof(std::string)];
	new (x) std::string("12345678");
	const auto n = reinterpret_cast<const std::string*>(x)->length();
}
