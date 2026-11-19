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
//

//#include <stdio.h>
//int main(void)
//{
//	int round = 0;
//	int player = 0;
//	int num = 0;
//
//	while (round < 31)
//	{
//		int spokenCount = 0;
//		printf("\n%c턴 (현재 숫자: %d)\n", 'A' + player, round);
//		
//		while (spokenCount < 3 && round < 31)
//		{
//			printf("입력 (1~3숫자, 턴 종료 0): ");
//			scanf("%d", &num);
//
//			if (num == 0)
//			{
//				if (spokenCount == 0)
//				{
//					printf("한 개 이상 말한 뒤 0을 입력하셔야됩닏.\n");
//					continue;
//				}
//				break;
//			}
//			
//			if (num < 1 || num>3)
//			{
//				printf("1~3 또는 0만 입력하세요.\n");
//				continue;
//			}
//			round++;
//			spokenCount++;
//			printf("=> %d\n", round);
//		}
//		if (round >= 31)
//		{
//			break;
//		}
//		player = (player + 1) % 2;
//	}
//	printf("\n %c가 졌습니다.\n", 'A' + player);
//	printf("%c가 이겼습니다!", 'A' + (player + 1) % 2);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int round = 0;
//	int player = 0;
//	int num = 0;
//
//	while (round < 31)
//	{
//		int spokenCount = 0;
//		printf("\n%c턴 (현재 숫자: %d, 다음 숫자: %d)\n", 'A' + player, round, round + 1);
//
//		while (spokenCount < 3 && round < 31)
//		{
//			printf("숫자 입력(%d입력, 턴 종료 0): ", round + 1);
//			scanf("%d", &num);
//
//			if (num == 0)
//			{
//				if (spokenCount == 0)
//				{
//					printf("한 개 이상 말한 뒤 0을 입력하세요! \n");
//					continue;
//				}
//				break;
//			}
//
//			if (num != round + 1)
//			{
//				printf("잘못된 입력입니다. %d을 입력하세요.\n", round + 1);
//				continue;
//			}
//
//			round = num;
//			spokenCount++;
//			printf("=>현재 숫자: %d", round);
//
//			if (round >= 31)
//			{
//				break;
//			}
//			
//		}
//		if (round >= 31)
//		{
//			break;
//		}
//		player = (player + 1) % 2;
//	}
//	printf("\n%c가 졌습닏다.\n", 'A' + player);
//	printf("%c가 이겼습니다!\n", 'A' + (player + 1) % 2);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//}

#include <stdio.h>
int main(void)
{
	int for_flag = 1;
	int number = 0;
	while (for_flag)
	{
		printf("number = %d\n", number);
		while (number++)
		{
			printf(">number = %d\n", number);
			if (number == 3)
			{
				for_flag = 0;
				break;
			}
		}
		number++;
		printf(">>number = %d\n", number);
	}
	printf("%d %d\n", for_flag, number);
}