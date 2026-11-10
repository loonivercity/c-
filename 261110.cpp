//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int tens;
//	int digits;
//	printf("숫자 입력");
//	scanf("%d", &n);
//	do {
//		tens = n / 10;
//		digits++
//	} while (tens == 0);
//	printf("%d자리수", tens);
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int n=1234;
//	int tens =1;
//	int digits=1;
//	printf("숫자 입력 ");
//	scanf("%d", &n);
//	int copyN = n;
//	while (n > 10)
//	{
//		n= n / 10;
//		digits++;
//	}
//	int numb = (int)pow(10, digits-1);//1000
//	//printf("%.lf",numb);
//
//	int result;
//	
//
//	while (1)
//	{
//		result = copyN / numb;
//		int hearts = result * 2;//printf("%d\n", result);
//		copyN = copyN % numb;
//		numb = numb / 10;
//		
//		while (hearts > 0)
//		{
//			printf("\u2665");
//			hearts--;
//			
//		}printf("\n");
//		if (copyN == 0)
//		{
//			break;
//		}
//	}
//	

	//result = copyN / numb;
	//printf("%d\n", result);
	//copyN = copyN % numb;
	//numb = numb / 10;

	//result = copyN / numb;
	//printf("%d\n", result);
	//copyN = copyN % numb;
	//numb = numb / 10;

	//result = copyN / numb;
	//copyN = copyN % numb;
	//printf("%d\n", result);





//#include<stdio.h>
//int main(void)
//{
//	int num1, num2;
//	int min, max;
//
//	printf("시작값 ==>");
//	scanf("%d", &num1);
//	printf("끝값 ==>");
//	scanf("%d", &num2);
//
//	if (num1 < num2)
//	{
//		min = num1;
//		max = num2;
//	}
//	else {
//		min = num2;
//		max = num1;
//	}
//	int i = min;
//	while (i <= max)
//	{
//		if (i % 2 != 0) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//	printf("\n");
//
//	return 0;
//}




//#include <stdio.h>
//int main(void)
//{
//	for (int dan = 2; dan <= 9; dan++)
//	{
//		printf("%d단\n", dan);
//		for (int n = 1; n <= 9; n++)
//		{
//			
//			printf("%d x %d = %d\n", dan, n, dan * n);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	for (int dan = 2; dan <= 9; dan++)
//	{
//		if (dan == 3)
//		{
//			continue;
//		}
//		printf("%d단\n", dan);
//		for (int n = 1; n <= 9; n++)
//		{
//
//			printf("%d x %d = %d\n", dan, n, dan * n);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	for (int four = 1; four <= 4; four++)
//	{
//		for (int six = 1; six <= 6; six++)
//		{
//			printf("4면 - %d, 6면 - %d\n", four, six);
//		}
//	}
//}

#include<stdio.h>
int main(void)
{
	int outer;
	int inter;
	for (outer = 0; outer < 5; outer++)
	{
		printf("%d번째 내부 반복문 진입\n", outer);
		for (inter = 0; inter < 5; inter++)
		{
			printf("내부 반복문 %d번 반복\n", inter);
		}
		printf("%d번째 내부 반복문 탈출\n\n", outer);
	}
	return 0;
}