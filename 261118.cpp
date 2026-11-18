#include <stdio.h>
int main(void)
{
	int LINE = 4;
	printf("몇줄?? >>>>");
	scanf("%d", &LINE);

	int outer;
	int num_num = 1; 
	int current_num = 1; 

	for (; current_num <= LINE;) {
		for (outer = 1; outer <= num_num; outer++)
		{
			printf("%d", current_num);
		}

		num_num++;       
		current_num++;

		printf("\n");
	}


	//	int outer;
	//	int num_num = 1;
	//	int current_num = 1;

	//	for (outer = 1; outer <= num_num; outer++)
	//	{
	//		printf("%d", current_num);
	//	}
	//	num_num++;
	//	current_num++;
	//	printf("\n");

	//	for (outer = 1; outer <= num_num; outer++)
	//	{
	//		printf("%d", current_num);
	//	}
	//	num_num++;
	//	current_num++;
	//	printf("\n");

	//	for (outer = 1; outer <= num_num; outer++)
	//	{
	//		printf("%d", current_num);
	//	}
	//	num_num++;
	//	current_num++;
	//	printf("\n");

	//	for (outer = 1; outer <= num_num; outer++)
	//	{
	//		printf("%d", current_num);
	//	}
	//	num_num++;
	//	current_num++;
	//	printf("\n");

	return 0;
}