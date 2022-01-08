#include <string.h>
#include <stdlib.h>
struct string {
	union {
		char* p;
		char buf[32];
	};
	size_t string_length;
	bool copy;
	string(const char* p)
		: string_length(strlen(p))
		, copy(string_length < sizeof buf)
	{
		if (copy)
			static_cast<char*>(memcpy(buf, p, string_length))[string_length] = '\0';
		else
			this->p = _strdup(p);
	}
	~string()
	{
		if (!copy)
			free(p);
	}
	size_t length() const
	{
		return string_length;
	}
};
int main()
{
	string s("ABCDEFGHIJKLMNOPQRSTUVWXYZ************************************************");
	const auto n = sizeof s;
	const auto m = s.length();
}
