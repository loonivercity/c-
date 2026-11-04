//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do {
//		printf("\n%d번째 날 !\n", ++day);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 공부한다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command != 1) break;
//		int randInt = rand() % 5 + 1;
//
//		switch (randInt) {
//		case 1:
//			printf("기분이 좋네요.\n");
//		case 3:
//			printf("도서관에서 ");
//			break;
//		case 2:
//			printf("기분이 나빠요.\n");
//		case 4:
//			printf("카페에서 ");
//			break;
//		case 5:
//			printf("학원에서 ");
//		}
//		printf("코딩 공부합니다.\n");
//		study++;
//	} while (1);
//	if (day <= 3)
//	{
//		printf("그대로입니다...\n");
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//			
//		case 0:
//			printf("코딩새싹이 되었습니다.!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다.!\n");
//			break;
//
//		default:
//			printf("풀스택 개발자가 되었습니다.!\n");
//			break;
//		}
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//
//	do {
//		printf("\n========================================\n");
//		printf("%d번째 날 ! (현재 누적 공부량: %d)\n", ++day, study);
//		printf("오늘도 코딩할까요?\n");
//		printf("1. 독학으로 열공한다 \n");
//		printf("2. 밤샘 몰입 코딩을 한다 \n");
//		printf("3. AI와 구글링으로 운에 맡긴다 \n");
//		printf("4. 오늘은 휴식한다 \n");
//		printf("그외. 프로그램을 종료하고 엔딩 보기\n >> ");
//
//		if (scanf("%d", &command) != 1)break;
//
//		if (command == 1)
//		{
//			printf("기본기를 차근차근 다졌습니다.\n");
//			study += 1;
//		}
//		else if (command == 2)
//		{
//			printf("밤을 새워 몰입해서 코딩했습니다!\n");
//		}
//		else if (command == 3) {
//			if (rand() % 2 == 0) {
//				printf("성공! AI의 도움으로 복잡한 버그를 한번에 해결했습니다!\n");
//				study += 2;
//			}
//			else {
//				printf("실패... AI는 도움을 주지 못했습니다.\n");
//				study -= 1;
//			}
//	}
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	int stress = 0;

	do {
		printf("%d번째 날 ! (공부량: %d점 | 스트레스: %d점)\n", ++day, study, stress);
		printf("오늘도 코딩할까요?\n");
		printf("1. 독학으로 열공한다 \n");
		printf("2. 밤샘 몰입 코딩을 한다 \n");
		printf("3. AI와 구글링으로 운에 맡긴다 \n");
		printf("4. 오늘은 휴식한다 \n");
		printf("그외. 프로그램을 종료하고 엔딩 보기\n >> ");

		if (scanf("%d", &command) != 1) break;

		if (command == 1)
		{
			printf("기본기를 차근차근 다졌습니다.\n");
			study += 1;
			stress += 1;
		}
		else if (command == 2)
		{
			printf("밤을 새워 몰입해서 코딩했습니다!\n");
			study += 2;
			stress += 2;
		}
		else if (command == 3) {
			if (rand() % 2 == 0) {
				printf("성공! AI의 도움으로 복잡한 버그를 한번에 해결했습니다!\n");
				study += 2;
			}
			else {
				printf("실패... AI는 도움을 주지 못했습니다.\n");
				study -= 1;
				stress += 1;
			}
		}
		else if (command == 4) {
			printf("오늘은 컴퓨터를 끄고 푹 쉬었습니다.\n");
			stress -= 2;
			if (stress < 0) stress = 0;
			continue;
		}
		else if (command == 921)
		{
			printf(" \n");
			printf("owo\n");
			printf(" \n");
			printf("[SECRET ENDING] 당신은 인간을 그만두고 고양이가 되었습니다.\n");
			return 0;
		}
		else {
			break;
		}

		int randInt = rand() % 5 + 1;

		switch (randInt) {
		case 1:
			printf("기분이 좋네요.\n");
			stress -= 1;
		case 3:
			printf("도서관에서 ");
			break;
		case 2:
			printf("기분이 나빠요.\n");
			stress += 1;
		case 4:
			printf("카페에서 ");
			break;
		case 5:
			printf("학원에서 ");
			break;
		}
		printf("코딩 공부합니다.\n");
		study++;

		if (stress >= 15) {
			printf("\n스트레스가 한계치에 도달해 번아웃이 왔습니다...\n");
			break;
		}

	} while (1);
	printf("최종 공부: %d, 스트레스: %d\n", study, stress);

	if (stress >= 10) {
		printf("번아웃: 과도한 스트레스로 코딩을 포기합니다.\n");
	}
	else if (day <= 3)
	{
		printf("그대로입니다...\n");
	}
	else {
		int level = study / 8;
		switch (level) {
		case 0:
			printf("코딩새싹이 되었습니다!\n");
			break;
		case 1:
			printf("프로그래머가 되었습니다!\n");
			break;
		case 2:
			printf("FrontEnd 개발자가 되었습니다!\n");
			break;
		case 3:
			printf("BackEnd 개발자가 되었습니다!\n");
			break;
		default:
			printf("풀스택 개발자가 되었습니다!\n");
			break;
		}
	}

	return 0;
}