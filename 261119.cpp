//#include <stdio.h>
//int main(void)
//{
//	int LINE = 4;
//	printf("몇줄?? >>>>");
//	scanf("%d", &LINE);
//
//	int outer=1;
//	int inter;
//	int num_num = 1;
//	int current_num = 1;
//
//	for (; current_num <= LINE;) {
//		
//		for (inter = 1; inter <=LINE-current_num; inter++)
//		{
//			printf(" ");
//		}
//		
//		for (outer = 1; outer <= num_num; outer++)
//		{
//			printf("%d", current_num);
//		}
//
//		num_num++;
//		current_num++;
//
//		printf("\n");
//	}
//}
//	

//	int outer;
//	int num_num = 1;
//	int current_num = 1;
//
//	for (outer = 1; outer <= num_num; outer++)
//	{
//		printf("%d", current_num);
//	}
//	num_num++;
//	current_num++;
//	printf("\n");
//
//	for (outer = 1; outer <= num_num; outer++)
//	{
//		printf("%d", current_num);
//	}
//	num_num++;
//	current_num++;
//	printf("\n");
//
//	for (outer = 1; outer <= num_num; outer++)
//	{
//		printf("%d", current_num);
//	}
//	num_num++;
//	current_num++;
//	printf("\n");
//
//	for (outer = 1; outer <= num_num; outer++)
//	{
//		printf("%d", current_num);
//	}
//	num_num++;
//	current_num++;
//	printf("\n");
//
//	return 0;
//}


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
//			printf("숫자 입력(턴 종료 0):");
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
//				printf("잘못된 입력입니다. %d을(를) 입력하세요.\n", round + 1);
//				continue;
//			}
//
//			round = num;
//			spokenCount++;
//			printf("=>현재 숫자: %d\n", round);
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
//	for (float conversion = 0; conversion < 2; conversion= conversion + 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//}


//#include <stdio.h>
//int main(void)
//{
//	for (double conversion = 90; conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.31f\n", conversion);
//	}
//}
//#include <stdio.h>
//int main(void)
//{
//	double conversion = 90;
//	while (conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion/=3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int number;
//	for (; ;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//}

#include <stdio.h>
int main(void)
{
	int number = 1;
	int for_flag = 0;
	for(int number=1;;number++)
	{
		printf("number=%d\n", number);
		for(int for_flag=0;number++ ;number++)
		{
			printf(">number=%d\n", number);
			if (number == 3)
			{
				for_flag = 0;
				break;
			}
		}
		printf(">>number=%d\n", number);
	}
	printf("%d %d\n", for_flag, number);
	return 0;
}