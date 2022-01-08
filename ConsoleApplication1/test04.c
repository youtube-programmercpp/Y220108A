int main()
{
	//alignment (整列) について
	struct TEST {
		char a[2];
		char* p;//8バイト ... ８の倍数のアドレスに配置したい
	};
	const int x = sizeof(struct TEST);
}