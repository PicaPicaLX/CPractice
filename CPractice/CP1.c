#include<stdio.h>
int main()
{
	/*print();
	hello();
	nice();
	longp();
	printp();
	area();*/
	FormartNum();
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

int longp()
{
	char cChar1;
	char cChar2;
	int iInt1;
	int iInt2;
	cChar1 = 'a';
	cChar2 = 97;
	iInt1 = 'a';
	iInt2 = 97;
	printf("%c\n",cChar1);
	printf("%c\n",cChar2);
	printf("%c\n", iInt1);
	printf("%c\n", iInt2);
	/*printf("%c\n", iInt1);*/
	/*printf("%c\n", iInt2);*/
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

int FormartNum()
{
	signed int iNumber;
	printf("请输入数字: ");
	scanf_s("%d", &iNumber);
	printf("%d\n", iNumber);
	system("pause");
	return 0;
}