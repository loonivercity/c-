//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0; //1 
//	int code = 0; //2
//	int game = 0; //3
//
//	int reels = 0; //4
//	int stress = 0; // dying
//
//	do {
//		printf("%d번째 날 !\n", ++day);
//		printf("오늘은 뭘할까요?\n");
//		printf("1. 인강을 보면서 열공한다 \n");
//		printf("2. 몰입 코딩을 한다 \n");
//		printf("3. 게임을 한다 \n");
//		printf("4. 오늘은 휴식한다 \n");
//		printf("그외. 프로그램을 종료하고 엔딩 보기\n >> ");
//
//		if (stress >= 15) {
//			printf("\n스트레스가 한계치에 도달해 당신은 사망했습니다!\n");
//			break;
//			return 0;
//		}
//
//		if (scanf("%d", &command) != 1) break;
//
//		if (command == 1)
//		{
//			printf("밤새 열공했습니다.\n");
//			study += 1;
//			stress += 2;
//		}
//		else if (command == 2)
//		{
//			printf("몰입해서 코딩했습니다.\n");
//			code += 2;
//			stress += 2;
//		}
//		else if (command == 3) {
//			{
//				printf("하루종일 게임했습니다!\n");
//				game += 2;
//				stress += 1;
//			}
//		}
//		else if (command == 4) {
//			printf("오늘은 하루종일 릴스를 보면서 푹 쉬었습니다.\n");
//			stress -= 2;
//			study -= 1;
//			if (stress < 0) stress = 0;
//			continue;
//		}
//		else if (command == 921)
//		{
//			printf(" \n");
//			printf("owo\n");
//			printf(" \n");
//			printf("[SECRET ENDING] 당신은 인간을 그만두고 고양이가 되었습니다.\n");
//			return 0;
//		}
//		else {
//			break;
//		}
//
//		int randInt = rand() % 5 + 1;
//		switch (randInt) {
//		case 1:
//			printf("기분이 좋네요.\n");
//			stress -= 1;
//			break;
//		case 3:
//			printf("기분이 나빠요.\n");
//			stress += 1;
//			break;
//		}
//
//
//		
//
//	} while (1);
//
//	printf("최종 공부: %d, 게임: %d, 코딩: %d, 스트레스: %d\n", study, game, code, stress);
//
//	if (day <= 3)
//	{
//		printf("그대로입니다.\n");
//	}
//	else {
//
//		if (study >= game && study >= code) {
//			int level_s = study / 5;
//			switch (level_s)
//			{
//			case 0:
//				printf("공부를 하지 않았습니다!\n");
//				break;
//			case 1:
//				printf("어중간하게 공부했네요!\n");
//				break;
//			case 2:
//				printf("명문대 입학!\n");
//				break;
//			default:
//				printf("의대 입학!\n");
//				break;
//			}
//		}
//		else if (game >= study && game >= code) {
//			int level_g = game / 5;
//
//			switch (level_g)
//			{
//			case 0:
//				printf("게임은 잘하게 되었습니다!\n");
//				break;
//			case 1:
//				printf("게임은 좀 잘하게 되었습니다!\n");
//				break;
//			case 2:
//				printf("게임만 하는 백수가 되었습니다!!\n");
//				break;
//			default:
//				printf("프로게이머가 되었습니다!\n");
//				break;
//			}
//		}
//		else {
//			int level_c = code / 5;
//
//			switch (level_c)
//			{
//			case 0:
//				printf("코딩을 하지 않았습니다!\n");
//				break;
//			case 1:
//				printf("코딩을 좀 할 수 있네요!\n");
//				break;
//			case 2:
//				printf("컴공을 전공하게 되었습니다!\n");
//				break;
//			default:
//				printf("개발자가 되었습니다!\n");
//				break;
//			}
//		}
//	}
//	return 0;
//}
//


//#include <stdio.h>
//int main(void)
//{
//	int select;
//	enum { LOGIN, SIGNIN, OPTIONS, CREDITS, GAMEOVER };
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인\n 2.회원가입\n 3.옵션\n 4.만든 사람들\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case LOGIN:
//			printf("로그인\n");
//			break;
//		case SIGNIN:
//			printf("회원가입\n");
//			break;
//		case OPTIONS:
//			printf("옵션 세팅\n");
//			break;
//
//		case CREDITS:
//			printf("만든 사람들\n");
//			break;
//		}
//	} while (select>=1 && select <=4);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n",sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45)
//		{
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int count;
//	for (count = 10;count <= 99;count++)
//	{
//		printf("%d ", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int number;
//	int sum = 1;
//	for (number = 3; number <= 8; number++)
//	{
//		sum =sum*number;
//	}
//	printf("곱 %d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int num;
//
//	for (num = 1; num <= 50; num++)
//	{
//		int tens = num / 10;
//		int ones = num % 10;
//
//		if (tens == 3 || ones == 3 || ones == 6 || ones == 9)
//		{
//			printf("%d (박수)\n", num);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char input;
//	for (; ;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		
//		}
//
//	}
//}

//#include<stdio.h>
//int main(void)
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 :");
//	for (number = 10, exitFor = number-1; 
//		exitFor; 
//		number *= exitFor, exitFor--)
//	{
//
// 	}
//	printf("%d\n", number);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int num;
//	for (num = 0; num <= 200; num+=11)
//	{
//		printf("%d\n", num);
//		//if (num % 11 == 0)
//		//{
//		//	printf("%d\n", num);
//		//}
//	}
//}

#include <stdio.h>
int main(void)
{
	float sqLine=0.1;
	for (; 
		sqLine * 4 <= 21;
		sqLine += 0.1)
	{
		printf("%.1lf\n", sqLine);
	}
	return 0;
}