//#include <stdio.h>
//
//int main()
//{
//	int radius = 5;
//	float pi = 3.14;
//	float area = radius*radius * pi;
//	float circumference = radius * pi * 2;
//	printf("area = %.2f\n", area);
//	printf("circumference = %.1f", circumference);
//}

//#include <stdio.h>
//
//int main()
//{
//	int base = 3;
//	int top = 5;
//	int hight = 7;
//	int area = (base + top) * hight / 2;
//	printf("area = %d", area);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력:");
//	scanf("%d", &k);
//	printf("입력한 숫자는 %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 :");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 :");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자 출력: %c%c%c\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int r;
//	printf("반지름의 길이는?");
//	scanf("%d", &r);
//	float pi = 3.14;
//	float area = r * r * pi;
//	float circumference = r * pi * 2;
//	printf("area = %.2f\n", area);
//	printf("circumference = %.2f\n", circumference);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int W1;
//	int W2;
//	float H;
//	printf("윗변의 길이는?");
//	scanf("%d", &W1);
//	printf("밑변의 길이는?");
//	scanf("%d", &W2);
//	printf("높이의 길이는?");
//	scanf("%f", &H);
//	float area = (W1 + W2) * H /2;
//	printf("area = %.1f", area);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d +%d = %d\n", a, b, a + b);
//	printf("%d -%d = %d\n", a, b, a - b);
//	printf("%d *%d = %d\n", a, b, a * b);
//	printf("%d /%d = %d\n", a, b, a / b);
//	printf("%d %%%d = %d\n", a, b, a % b);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number --; printf("%2d\n", number);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	printf("숫자 두 개 입력 : ");
//	scanf("%d %d", &a, &b);
//	printf("%d +%d = %d\n", a, b, a + b);
//	printf("%d -%d = %d\n", a, b, a - b);
//	printf("%d *%d = %d\n", a, b, a * b);
//	printf("%d /%d = %d\n", a, b, a / b);
//	printf("%d %%%d = %d\n", a, b, a % b);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("% d = 1 % %4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d=4%%2\n", third);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=number1%%4\n", number1%4);
//	printf("%d=number2%%3\n", number2 % 3);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d=1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d=2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d=3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d=4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d=5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d=6%%3\n", sixth);
//
//}

//#include<stdio.h>
//
//int main()
//{
//	int number;
//	scanf("%d", &number);
//	printf("%d=number1%%50\n", number % 50);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//	
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개,", coin10000);
//	printf("오천원권 %d개,", coin5000);
//	printf("천원권 %d개,", coin1000);
//	printf("나머지는 동전입니다.");
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int jelly;
	printf("젤리의 가격은?(1000원 미만)");
	scanf("%d", &jelly);
	int coin = 1000 - jelly;

	int coin500 = coin / 500;
	int coin100 = coin500


	return 0;
}