int main()
{
	const int x = sizeof(int);//型の大きさを得たい場合に限り括弧が必要
	const int y = sizeof x;//オブジェクトの大きさを得る場合は括弧は不要
	const int z = sizeof (1            + 1);//式(expression) 
	const int a = sizeof "ABCDEF";
}
