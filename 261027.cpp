//#include <stdio.h>
//
//int main()
//{
//	int jelly;
//	printf("젤리의 가격은?(1000원 미만)");
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
//	printf("거스름돈 총액 %d\n", coin);
//	printf("500원 %d개\n", coin500);
//	printf("100원 %d개\n", coin100);
//	printf("50원 %d개\n", coin50);
//	printf("10원 %d개\n", coin10);
//	
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int input;
//	scanf("%d", &input);
//	if (input > 0)
//	{
//		printf("input은 양수");
//	}
//	else if (input == 0)
//	{
//		printf("input은 0");
//	}
//	else
//	{
//		printf("input은 음수");
//	}
//	
//	return 0;
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
//	int y_age;
//	printf("나이 입력 ");
//	scanf("%d", &y_age);
//	printf("전체 관람가\n");
//	if (y_age >= 12)
//	{
//		printf("12세 관람가\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가\n");
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
//	if (initial >= 0x61 && initial <= 'z')
//	{
//		printf("소문자");
//	}
//	else if (initial >= 65 && initial <='Z')
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
//	printf("w a s d :");
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.");
//	}
//	else if (key == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.");
//	}
//	else if (key == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.");
//	}
//	else if (key == 'd')
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

//#include <stdio.h>
//
//int main(void)
//{
//	int input;
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다.");
//	}
//	if (input % 6 == 0)
//	{
//		printf("input은 6의 배수입니다.");
//	}
//	if (input % 9 == 0)
//		printf("input은 9의 배수입니다.");
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char command = 'i';
//		switch (command)
//		{
//		case 'i':
//			printf("아이템창 오픈\n");
//		case 'm':
//			printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//		break;
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int input1, input2;
//	char oper;
//	printf("숫자 두 개 입력 :");
//	scanf("%d %d", &input1, &input2);
//	printf("+ - * / %%");
//	scanf(" %c", &oper);
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int month;
//	printf("month :");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: printf("January"); break;
//	case 2: printf("Febuary"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("Jun"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int number;
//	int input;
//	const int option = 3;
//
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n"); break;
//	case 2:
//		printf("데이터 로드.\n"); break;
//	case option:
//		printf("옵션 세팅.\n"); break;
//	default:
//		printf("지정된 기는이 없습니다.\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int number;
//	printf("number 입력(0~9): ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3 :
//	case 6:
//	case 9: printf("짝");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char command = 'x';
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n");
//		break;
//	case 'X': printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d + %d = %d\n", number3, number4, number3 + number4);
//		break;
//	}
//	}
//	return 0;
//}

#include <stdio.h>
int main (void)
{
	char command;
	printf("w a s d :");
	scanf(" %c", &command);
	switch (command)
	{
	case 'w': printf("위 방향키를 입력하셨습니다.");
		break;
	case 'a': printf("좌 방향키를 입력하셨습니다.");
		break;
	case 's': printf("아래 방향키를 입력하셨습니다.");
		break;
	case 'd': printf("우 방향키를 입력하셨습니다.");
		break;
	}
}

#include <stdio.h>
int main(void)
{
	int appetizer, mainDish, dessert;
	printf("appetizer : 1. 캐비어 2. 샐러드 3. 푸아그라");
	scanf("%d", &appetizer);
	printf("mainDish : 1. 스테이키 2. 생선요리 3. 양갈비");
	printf("dessert : 1. 케잌 2. 아이스크림 3. 초콜릿무스");
	scanf(" %c", &command);
	switch (command)
	{
	case 'w': printf("위 방향키를 입력하셨습니다.");
		break;
	case 'a': printf("좌 방향키를 입력하셨습니다.");
		break;
	case 's': printf("아래 방향키를 입력하셨습니다.");
		break;
	case 'd': printf("우 방향키를 입력하셨습니다.");
		break;
	}
}