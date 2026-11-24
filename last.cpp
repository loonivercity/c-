//#include <stdio.h>
//
//int main(void)
//{
//	int for_flag = 1;
//	int number = 0;
//
//	while (for_flag) 
//	{
//		printf("number = %d\n", number);
//		while (number++) 
//		{
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

#include <stdio.h>
int main(void)
{
	int for_flag = 1;
	int number = 0;

	for (; for_flag; ) {
		printf("number = %d\n", number);

		for (; number++; ) {
			printf(" >number = %d\n", number);
			if (number == 3) {
				for_flag = 0;
				break;
			}
		}

		number++;
		printf(">>number = %d\n", number);
	}

	printf("%d %d\n", for_flag, number);
	return 0;
}