#include <stdio.h>
int main()
{
	/*print();
	hello();
	nice();
	printp();
	area();
	FormartIntNum();
	FormatFloNum();
	FormatDoubNum();
	FormatLDoubNum();
	UseAuto();*/
	UseStatic();
	UseRegister();
	UseEntern();
	MixOper();

}

int print()
{
	int iResult = 0;
	int i;
	printf("从1加到100是: ");
	for (i = 1; i < 100; i++)
	{
		iResult = i + iResult;
	}
	printf("%d\n", iResult);
	system("pause");
	return 0;
}

int hello()
{
	putchar('H');
	putchar('e');
	putchar('l');
	putchar('l');
	putchar('o');
	putchar('\n');
	system("pause");
	return 0;
}

int nice()
{
	printf("What a nice day !\n");
	system("pause");
	return 0;
}

int printp()
{
	printf("Hello!\n");
	printf("I like to code with C!\n");
	printf("I'm LX!");
	system("pause");
	return 0;
}

int area()
{
    #define PAI 3.14159
	double fRadius;
	double fResult = 0;
	printf("请输入圆的半径: ");
	scanf_s("%lf", &fRadius);
	fResult = fRadius * fRadius*PAI;
	printf("圆的面积为: %lf\n", fResult);
	system("pause");
	return 0;
}

int FormartIntNum()
{
	signed int iNumber;
	printf("请输入数字: ");
	scanf_s("%d", &iNumber);
	printf("%d\n", iNumber);
	system("pause");
	return 0;
}

int FormatFloNum()
{
	float fFloatStyle;
	printf("请输入一个小数: ");
	scanf_s("%f", &fFloatStyle);
	printf("%f\n", fFloatStyle);
	system("pause");
	return 0;
}

int FormatDoubNum()
{
	double dDoubleStyle;
	scanf_s("%lf", &dDoubleStyle);
	/*dDoubleStyle = 6.1112222;*/
	printf("%lf\n", dDoubleStyle);
	system("pause");
	return 0;
}

int FormatLDoubNum()
{
	long double fLongDouble;
	printf("输入一个数字: ");
	scanf_s("%lf", &fLongDouble);
	printf("数字是: %f\n", fLongDouble);
	system("pause");
	return 0;
}

int Char()
{
	char cChar1;
	char cChar2;
	int iInt1;
	int iInt2;
	cChar1 = 'a';
	cChar2 = 97;
	iInt1 = 'a';
	iInt2 = 97;
	printf("%c\n", cChar1);
	printf("%c\n", cChar2);
	printf("%c\n", iInt1);
	printf("%c\n", iInt2);
	/*printf("%c\n", iInt1);*/
	/*printf("%c\n", iInt2);*/
	system("pause");
	return 0;
}

int UseAuto()
{
	printf("第一次调用: ");
	Addone();
	printf("第二次调用: ");
	Addone();
	system("pause");
	return 0;
}

int UseStatic()
{
	printf("第一次调用: ");
	PlueOne();
	printf("第二次: ");
	PlueOne();

	system("pause");
	return 0;
}

int UseRegister()
{
	register int iInt;
	iInt = 100;
	printf("%d\n",iInt);
	system("Pause");
	return 0;
}

int UseEntern()
{
	extern int iExtern;
	printf("%d\n", iExtern); /*在CP2.c文件中将整形12赋值给了iExtern*/
	system("pause");
	return 0;
}

int MixOper()
{
	int iInt = 1;
	char cChar = 'A';
	float fFloat = 2.11f;

	double result = iInt + cChar + fFloat;

	printf("结果: %f\n", result);
	system("pause");
	return 0;
}

