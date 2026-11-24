//#include<stdio.h>
//int main(void)
//{
//	int i, k;
//	for (i = 9; i >= 1; i--)
//	{
//		for (k = 9; k >= 2; k--)
//		{
//			printf("%dX%d=%2d\t", k, i, i * k);
//		}
//		printf("\n");
//	}
//}

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


//#include <stdio.h>
//int main(void)
//{
//	int for_flag = 1;
//	int number = 0;
//
//	for (; for_flag; ) {
//		printf("number = %d\n", number);
//
//		for (; number++; ) {
//			printf(" >number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//
//		number++;
//		printf(">>number = %d\n", number);
//	}
//
//	printf("%d %d\n", for_flag, number);
//	return 0;
//}

//#include <iostream>
//void main()
//{
//	int number, count;
//	std::cin >> number >> count;
//	std::cout << "new:" << number << "," << count << std::endl;
//}


//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int number, count;
//	cin >> number >> count;
//	cout << "new:" << number << "," << count << std::endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = 77;
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	cout << "AND :" << bitset<8>(a & b) << endl;
//	cout << "OR :" << bitset<8>(a|b) << endl;
//	cout << "XOR :" << bitset<8>(a^b) << endl;
//	cout << "NOT :" << bitset<8>(~a) << endl;
//
//	cout << "&>^:" << bitset<8>(a ^ a & b) << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//
//void main()
//{
//	char a = -1;
//	char b = a >> 5;
//	char c = 127 >> 1;
//
//	printf("0x%x (%d)\n", a, a);
//	printf("0x%x (%d)\n", a, b);
//	printf("0x%x 0x%x\n\n", 127, c);
//
//	char d = 1 << 1;
//	char e = 1 << 6;
//	char f = 1 << 3;
//	printf("0x%x (%d)\n", d, d);
//	printf("0x%x (%d)\n", e, e); 
//	printf("0x%x (%d)\n", f, f);
//}

//#include <stdio.h>
//int main(void)
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int num[3] = { 3,6,9 };
//	cout << "num의 안에 들어있는";
//	cout<< "1번째 숫자는?" << num[1] << "\n" << endl;
//}

//#include<stdio.h>
//int main(void)
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d번째에 %d저장 \n", k, num[k]);
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> arr[i];
//		cout << arr[i] << endl;
//	}
//}