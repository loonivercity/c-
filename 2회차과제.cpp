
//문제3
//#include <stdio.h>
//
//int main()
//{
//	int jelly;
//	printf("젤리의 가격은?(1000원 미만): ");
//	scanf("%d", &jelly);
//	int coin = 1000 - jelly;
//
//	int coin500 = coin / 500;
//	int remainder = coin % 500;  
//
//	int coin100 = remainder / 100;
//	remainder = remainder % 100; 
//
//	int coin50 = remainder / 50;
//	remainder = remainder % 50;  
//
//	int coin10 = remainder / 10;
//
//	printf("거스름돈 총액 : %d원\n", coin);
//	printf("500원 동전: %d개\n", coin500);
//	printf("100원 동전: %d개\n", coin100);
//	printf("50원 동전: %d개\n", coin50);
//	printf("10원 동전: %d개\n", coin10);
//
//	return 0;
//}

//p69 예제모음03
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a,b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값==>");
//	scanf("%d", &a);
//	printf("+ - * / % ==>");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==>");
//	scanf("%d", &b);
//
//	if (k == '+') {
//		result = a + b;
//		printf("%d +%d = %d\n", a, b, result);
//	}
//	if (k == '-') {
//		result = a - b;
//		printf("%d-%d = %d\n", a, b, result);
//	}
//}

//p81 3-5
//#include <stdio.h>
//
//void main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%s\n", "Basic-C");
//}

//p83 3-6
//#include <stdio.h>
//
//void main()
//{
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다 \n");
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\\역슬래시 세 개 출력\n");
//}
