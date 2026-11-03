//#include <stdio.h>
//int main(void)
//{
//	char a = 'A';
//	while (a <= 'Z')
//	{
//		if (a != 'F')
//		{
//			printf("%c ", a);
//		}
//		a++;
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int hap = 0;
//	int currentNum = 0;
//	int player = 0;
//	while (hap <= 31)
//	{
//		printf("A: ");
//		scanf("%d", &currentNum);
//		if (currentNum > 3 || currentNum <= 0)
//		{
//			printf("숫자 1~3 내에서 입력해주세요.\n");
//			continue;
//		}
//		hap = hap + currentNum;
//		printf("=> %d\n", hap);
//	}
//	printf("B가 이겼습니다!");
//}

//#include <stdio.h>
//int main(void)
//{
//	int hap = 0;
//	int currentNum = 0;
//	int player = 0;
//	while (hap < 31)
//	{
//		if (player == 0)
//		{
//			printf("A: ");
//			scanf("%d", &currentNum);
//			if (currentNum > 3 || currentNum <= 0)
//			{
//				printf("숫자 1~3 내에서 입력해주세요.\n");
//				continue;
//			}
//			hap = hap + currentNum;
//			printf("=> %d\n", hap);
//			player++;
//		}
//		if (player == 1)
//		{
//			printf("B: ");
//			scanf("%d", &currentNum);
//			if (currentNum > 3 || currentNum <= 0)
//			{
//				printf("숫자 1~3 내에서 입력해주세요.\n");
//				continue;
//			}
//			hap = hap + currentNum;
//			printf("=> %d\n", hap);
//			player--;
//		}
//		if (hap > 31)
//			break;
//	}
//	if (player == 0)
//	{
//		printf("A가 이겼습니다!");
//	}
//	else
//		printf("B가 이겼습니다!");
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int hap = 0;
//	int currentNum = 0;
//	int player = 0;
//	while (hap < 31)
//	{
//		printf("%c: ", 'A' + player);
//		scanf("%d", &currentNum);
//		if (currentNum > 3 || currentNum <= 0)
//		{
//			printf("숫자 1~3 내에서 입력해주세요.\n");
//			continue;
//		}
//		hap = hap + currentNum;
//		printf("=> %d\n", hap);
//
//		if (hap > 31)
//			break;
//		player++;
//		player %= 5;
//	}
//	printf("%c가 졌습니다!", 'A' + player);
//
//	//if (player == 0)
//	//{
//	//	printf("A가 이겼습니다!");
//	//}
//	//else
//	//	printf("B가 이겼습니다!");
//}

//#include <stdio.h>
//int main(void)
//{
//	int temp = 20;
//	do {
//		printf("현재 온도 :%d도\n", temp);
//		temp--;
//	} while (temp > 28);
//}

//#include <stdio.h>
//int main(void)
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	int select;
	enum { LOGIN, SIGNIN, OPTIONS, CREDITS,GAMEOVER };
	do {
		printf("\n메뉴를 선택하세요.\n");
		printf("1.로그인\n 2.회원가입\n 3.옵션\n 4.만든 사람들\n");
		scanf("%d", &select);

		switch (select) {
		case LOGIN:
			printf("로그인\n");
			break;
		case SIGNIN:
			printf("회원가입\n");
			break;
		case OPTIONS:
			printf("옵션 세팅\n");
			break;

		case CREDITS:
			printf("만든 사람들\n");
			break;
		}
	} while (select != GAMEOVER);

	printf("게임을 종료합니다.\n");
	return 0;
}