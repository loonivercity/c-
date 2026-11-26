
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 :");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하세요 :");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하세요 :");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하세요 :");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf(" 합계===>%d\n", hap);
//}
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int aa[4];
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[2]);
//	printf("4번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계===>%d\n", hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int aa[4];
//	int hap;
//
//	for (int i = 0; i <= 3; i++)
//	{
//		printf("%d번째 숫자를 입력하세요 :",i+1);
//		scanf("%d", &aa[i]);
//	}
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계===>%d\n", hap);
//}
//

//#include <stdio.h>
//void main()
//{
//	int aa[4] = { 00, 200, 300, 400 };
//	int bb[] = { 100, 200, 300, 400 };
//	int cc[4] = { 100,200 };
//	int dd[4] = { 0 };
//	int i;
//
//	for (i = 0; i <= 3; i++)
//		printf("aa[%d]==>%d\t", i, aa[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i, bb[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==>%d\t", i,cc[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("dd[%d]==>%d\t", i, dd[i]);
//	printf("\n");
//}
//


//#include<stdio.h>
//int main(void)
//{
//	int arr[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	printf("\n\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[10];
//	int find =0;
//	int i = 0;
//	printf("숫자 열개 입력: ");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int for_flag = 1;
//	while (for_flag)
//	{
//		//if (find == arr[i])
//		//{
//		//	break;
//		//}
//		printf("숫자 한개 입력: ");
//		scanf("%d", &find);
//		
//		for (int i = 0; i < 10; i++)
//		{
//			
//			if (find == arr[i])
//			{
//				for_flag = 0;
//				printf("exist");
//				break;
//			}
//			
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int one, two;
//	int max = 0;
//	cin >> one >> two;
//
//	if (one > two) max = one;
//	else
//		max = two;
//	cout << "max=" << max << endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	cout << "max=" << max << endl;
//
//	int min = a[0];
//	for (int i = 1; i < 5; i++)
//	{
//		if (min > a[i])
//			min = a[i];
//	}
//	cout << "min=" << min << endl;
//
//	int total=0;
//	for (int i = 0; i < 5; i++)
//	{
//		total = total + a[i];
//	}
//	cout << "total=" << total << endl;
//
//	float mean = total / 5.0;
//	cout << "mean=" << mean << endl;
//}

#include <iostream>
using namespace std;

void main()
{
	int i = 0;
	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
	int ec[6] = { 0,0,0,0,0,0 };
	//for (int i=)
	for (i = 0; i < 6; i++)
	{
		if (a[i] = ec[i])
		{
			a[0]++;
		}
	}
}