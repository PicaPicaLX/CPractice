void Addone()
{
	auto int iInt = 1;
	iInt = iInt + 1;
	printf("%d\n", iInt);
}
void PlueOne()
{
	static int iInt1 = 1;
	iInt1 = iInt1 + 1;
	printf("%d\n", iInt1);
}