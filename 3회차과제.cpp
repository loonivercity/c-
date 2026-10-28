//1번 -> 프로그램을 종료합니다.
//#include <stdio.h>
//int main(void)
//{
//		int num = 100;
//
//		if (num != 100)
//		{	printf("100이 아니네요.\n");
//			printf("아쉽네요.\n");
//	}
//	printf("프로그램을 종료합니다.\n");
//}

//2번
//#include <stdio.h>
//int main(void)
//{
//	int num = 100;
//	if (num != 100)
//	{
//		printf("100이 아니네요.\n");
//		printf("아쉽네요.\n");
//	}
//	else
//	{
//		printf("100 이네요!\n");
//	}
//	printf("프로그램을 종료합니다.\n");
//}

//3번
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("정수를 입력하세요 :");
//	scanf("%d", &num);
//
//	if (num % 3 == 0)
//	{
//		printf("3의 배수입니다.");
//	}
//	else
//	{
//		printf("3의 배수가 아닙니다.");
//	}
//}

//4번 ->4번 if if else else

//5번
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("성적을 입력하세요 :");
//	scanf("%d", &num);
//
//	if (num >= 90)
//	{
//		printf("장학생");
//	}
//	else if (num < 90 && num >= 60)
//	{
//		printf("통과");
//	}
//	else
//	{
//		printf("재시험");
//	}
//	printf("입니다. \n");
//}

//6번 ->3번 switch case default

//7번 ->1번 break

//8번
//#include <stdio.h>
//int main(void)
//{
//	int age = 21;
//	switch (age / 10)
//	{
//	case 0: printf("어린이 \n");
//	case 1: printf("10대 \n");
//	case 2: printf("20대 \n");
//	case 3: printf("30대 \n");
//	case 4: printf("40대 \n");
//	default: printf("50대 이상 \n");
//	}
//}

//9번
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
//        printf("A 키를 눌렀습니다. \n");
//        break;
//
//    case 'B':
//        printf("B 키를 눌렀습니다. \n");
//        break;
//
//    case 'C':
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

//10번
//#include <stdio.h>
//int main(void)
//{
//    char ch = 'Z';
//
//    if (ch == 'A')
//        printf("A 출력 \n");
//    else if (ch == 'B')
//        printf("B 출력 \n");
//    else if (ch == 'C')
//        printf("C 출력 \n");
//    else
//        printf("모름 \n");
//
//    return 0;
//}

//11번 ->2이다, 2이다3이다
//#include <stdio.h>
//
//int main(void)
//{
//    int a = 2;
//
//    switch (a)
//    {
//    case 1:
//        printf("1이다");
//        break;
//    case 2:
//        printf("2이다");
//        break;
//    case 3:
//        printf("3이다");
//        break;
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//    int a = 2;
//
//    switch (a)
//    {
//    case 1:
//        printf("1이다");
//    case 2:
//        printf("2이다");
//    case 3:
//        printf("3이다");
//    }
//
//    return 0;
//}

//12번 (괄호가 없음)
#include <stdio.h>

int main()
{
    int a = 100;

    if (a < 200)
    {
        printf("a가 200보다 ");
        printf("작습니다.\n");
    }
    else
    {
        printf("a가 200보다 큽니다.");
    }

    return 0;
}