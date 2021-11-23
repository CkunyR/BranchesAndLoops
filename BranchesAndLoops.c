//分支和循环
//C语言是一门结构化的程序语言
//1.顺序结构
//2.选择结构
//3.循环结构

//#include <stdio.h>
//
//int main()
//{
//	int age = 10;
//;
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("已成年\n");
//	
//	return 0;
//
//}



#include <stdio.h>

int main()
{
	int age = 20;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 50)
		printf("壮年\n");
	else if ("age<=50 && age<90")
		printf("老年\n");
	else
		printf("老不死\n");

	return 0;
}