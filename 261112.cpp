////#include<stdio.h>
////int main(void)
////{
////	int outer;
////	int inter;
////	for (outer = 0; outer < 5; outer++)
////	{
////		for (inter = 0; inter < outer + 1; inter++)
////		{
////			printf("*");
////		}
////		printf("\n");
////	}
////}
//
////#include<stdio.h>
////int main(void)
////{
////	int outer;
////	int inter1, inter2;
////	for (outer = 0; outer < 5; outer++)
////	{
////		for (inter1 = 0; inter1 < 5-outer ; inter1++)
////		{
////			printf(" ");
////		}
////		for (inter2 = 0; inter2 < outer + 1; inter2++)
////		{
////			printf("*");
////		}
////		printf("\n");
////	}
////}
//#include<stdio.h>
//void main()
//{
//	//printf("*");
//	//printf("\n");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//	//for(int x=1; x<=3; x++)
//	//for(int x=0; x<3; x++)
//
//
//	//for (int x = 1; x <= 1; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//for (int x = 1; x <= 2; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//for (int x = 1; x <= 3; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//
//
//	//int y = 1;
//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y++;
//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y++;
//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//
//
//	//int y = 1;
//	//for (;y<=3;) {
//	//	for (int x = 1; x <= y; x++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//	y++;
//	//}
//
//
//	
//	//for (int y = 1; y <= 3; y++) 
//	//{
//	//	for (int x = 1; x <= y; x++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
//	//int LINE = 3;
//
//	//for (int y = 1; y <= LINE; y++)
//	//{
//	//	for (int x = 1; x <= y; x++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//
	//int LINE = 3;
	//printf("몇 줄?>>");
	//scanf("%d", &LINE);

	//for (int y = 1; y <= LINE; y++)
	//{
	//	for (int x = 1; x <= y; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
//}

//바깥쪽 for 문: 줄의 개수 결정 - outer
//첫번째 안쪽 for 문 : 왼쪽 공백 출력 - inter1
//두번째 안쪽 for 문 : 별 출력 - inter2

//#include<stdio.h>
//int main(void)
//{
//	//1단계
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//
//	//printf("*");
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//
//	//printf("*");
//	//printf("*");
//	//printf("\n");
//
//	//printf("*");
//	//printf("\n");
//
//	//2단계
//	//for (int x = 1; x <= 4; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//for (int x = 1; x <= 3; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//for (int x = 1; x <= 2; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//for (int x = 1; x <= 1; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//
//	//3단계
//	//int y = 4;
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y--;
//	//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y--;
//	//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y--;
//	//
//	//for (int x = 1; x <= y; x++)
//	//{
//	//	printf("*");
//	//}
//	//printf("\n");
//	//y--;
//
//	//5단계
//	//for (int y = 4; y >= 1; y--)
//	//{
//	//	for (int x = 1; x <= y; x++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}
//
//	//6단계
//	//int LINE = 4;
//	//printf("줄의 길이는??? >>>");
//	//scanf("%d", &LINE);
//
//	//for (int y = LINE; y >= 1; y--)
//	//{
//	//	for (int x = 1; x <= y; x++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	}
//}

#include <stdio.h>
int main(void)
{
	//printf(" ");
	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("\n");

	//printf(" ");
	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");

	//printf(" ");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");

	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("*");
	//printf("\n");

	//int outer, inter;
	//for (outer = 1; outer <= 3; outer++)
	//{
	//	printf(" ");
	//}
	//for (inter = 1; inter <= 1; inter++)
	//{
	//	printf("*");
	//}
	//printf("\n");

	//for (outer = 1; outer <= 2; outer++)
	//{
	//	printf(" ");
	//}
	//for (inter = 1; inter <= 3; inter++)
	//{
	//	printf("*");
	//}
	//printf("\n");
	//
	//for (outer = 1; outer <= 1; outer++)
	//{
	//	printf(" ");
	//}
	//for (inter = 1; inter <= 5; inter++)
	//{
	//	printf("*");
	//}
	//printf("\n");

	//for (outer = 1; outer <= 0; outer++)
	//{
	//	printf(" ");
	//}
	//for (inter = 1; inter <= 7; inter++)
	//{
	//	printf("*");
	//}
	//printf("\n");

	int outer,inter, z;
	for (z = 1; z <= 4; z++)
	{
		for (outer = 3; outer <= 0; outer--)
		{
			printf(" ");
		}
		for (inter = 1; inter<=z*2- 1; inter++)
		{
			printf("*");
		}
		printf("\n");
	}
}