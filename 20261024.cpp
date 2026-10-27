//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d, nextInt");
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf("%d 원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15);
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	printf("변수의 값 입력");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("변수는 양수");
//	}
//	else if (a = 0)
//	{
//		printf("변수는 0");
//	}
//	else
//	{
//		printf("변수는 음수");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int input;
//	printf("input 변수의 값 입력");
//	scanf("%d", &input);
//	if (input >= 10 && input<=99)
//	{
//		printf("input은 두자리 숫자입니다.");
//	}
//	else
//	{
//		printf("input은 두자리 숫자가 아닙니다.");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//


//#include <stdio.h>
//
//int main(void)
//{
//	int y_age;
//	printf("나이 입력");
//	scanf("%d", &y_age);
//	if (y_age > 12)
//	{
//		printf("12세 관람가");
//	}
//	if (y_age > 15)
//	{
//		printf("15세 관람가");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char initial;
//	printf("문자 하나 입력");
//	scanf("%c", &initial);
//
//	if (initial >= 'a' && initial <= 'z')
//	{
//		printf("소문자");
//	}
//	else if (initial >= 'A' && initial <='Z')
//	{
//		printf("대문자");
//	}
//	else
//	{
//		printf("알파벳이 아닙니다.");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char key;
//	printf("w a s d");
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	if (key == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	if (key == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//	if (key == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("Good");
//	}
//}

#include <stdio.h>

int main(void)
{
	int input;
	scanf("%d", &input);
	if (input % 3 == 0)
	{
		printf("input은 3의 배수입니다.");
	}
	if (input % 6 == 0)
	{
		printf("input은 6의 배수입니다.");
	}
	if (input % 9 == 0)
		printf("input은 9의 배수입니다.");
}
