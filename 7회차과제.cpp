//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0;k < 2;k++)
//		{
//			printf("중첩 for 문입니다.(i값 : %d)\n", i, k);
//		}
//	}
//}


//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 2;i <= 9;i++)
//	{
//		for (k = 1;k <= 9;k++)
//		{
//			printf("%dX%d=%d", i, k, k * i);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 1;i <= 9;i++)
//	{
//		for (k = 2;k <= 9;k++)
//		{
//			printf("%2dX%2d=%2d", k, i, k * i);
//		}
//		printf("\n");
//	}
//}

#include <stdio.h>
int main(void) {
    int outer, inter;

    for (outer = 0; outer < 4; outer++) {
        for (inter = 0; inter < 4 - outer; inter++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

