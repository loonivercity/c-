//#include <stdio.h>
//int main(void)
//{
//	char command;
//	printf("w a s d :");
//	scanf(" %c", &command);
//	switch (command)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다.");
//		break;
//	case 'a': printf("좌 방향키를 입력하셨습니다.");
//		break;
//	case 's': printf("아래 방향키를 입력하셨습니다.");
//		break;
//	case 'd': printf("우 방향키를 입력하셨습니다.");
//		break;
//	}
//}


//1번
// 아쉽네요
// 프로그램을 종료합니다.

//5번 
// 1) num>= 90 2) num>=60

//8번
//20대
//30대
//40대
//50대 이상

//9번
//
//#include <stdio.h>
//int main(void)
//{
//    char ch;
//
//    printf("A, B, C 키 중 하나를 누르고 Enter를 누르세요 : ");
//    scanf("%c", &ch);
//
//    switch (ch)
//    {
//    case 'A':
//    case 'a':
//        printf("A 키를 눌렀습니다. \n");
//        break;
//
//    case 'B':
//    case 'b':
//        printf("B 키를 눌렀습니다. \n");
//        break;
//
//    case 'C':
//    case 'c':
//        printf("C 키를 눌렀습니다. \n");
//        break;
//
//    default:
//        printf("잘못 눌렀습니다. \n");
//        break;
//    }
//
//    return 0;
//}
//


//#include <stdio.h>
//int main(void)
//{
//	int appetizer, mainDish, dessert;
//
//	printf("appetizer : 1. 캐비어 2. 샐러드 3. 푸아그라");
//	scanf("%d", &appetizer);
//
//	printf("mainDish : 1. 스테이키 2. 생선요리 3. 양갈비");
//	scanf("%d", &mainDish);
//
//	printf("dessert : 1. 케잌 2. 아이스크림 3. 초콜릿무스");
//	scanf("%d", &dessert);
//
//	switch (appetizer)
//	{
//	case 1: 
//		printf("주문한 음식은 캐비어, "); break;
//	case 2:
//		printf("주문한 음식은 샐러드, "); break;
//	case 3:
//		printf("주문한 음식은 푸아그라, "); break;
//	}
//	switch (mainDish)
//	{
//	case 1:
//		printf("스테이크, "); break;
//	case 2:
//		printf("생선요리, "); break;
//	case 3:
//		printf("양갈비, "); break;
//	}
//	switch (dessert)
//	{
//	case 1:
//		printf("케잌 입니다"); break;
//	case 2:
//		printf("아이스크림 입니다"); break;
//	case 3:
//		printf("초콜릿무스 입니다"); break;
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//		
//		if (i >= 70 && i < 80) { 
//			i++; 
//			continue; 
//		}
//		
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력 \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	while (num < 6)
//	{
//		printf("C\n");
//		num++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	while (num >= -10)
//	{
//		printf("%d\n", num);
//		num--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	while (num<=100)
//	{
//		if (num % 5 == 0)
//		{
//			printf("%d\n", num);
//		}
//		num++;
//		//num += 5;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른것 입력시 다시입력) : ");
//		scanf("%c", &alphabet);
//		if(alphabet>='a' && alphabet <='z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else {
//			continue;
//		}
//		printf("입력한 값 : %c\n", alphabet);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi *= number;//10
//		if (multi >= 50000)
//		{
//			break;
//		}
//		number++;
//	}
//	printf("%d", number);
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	char alpha;
	alpha = 'A';
	printf("%c", alpha);
	alpha++;
	printf("%c", alpha);
}