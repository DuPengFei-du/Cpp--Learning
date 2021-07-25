#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = a + b;
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("c:\test\test.c\n");
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	(void)scanf("%d %d", &a, &b);
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	if (n % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int j = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int is_prime(int n)
//{
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	int ret = is_prime(n);
//	if (ret == 1)
//		printf("素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}


//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	(void)scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>
//int MAX(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	(void)scanf("%d %d", &a, &b);
//	c = MAX(a, b);
//	printf("%d", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	(void)scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	(void)scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int key = 6;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//			left = mid + 1;
//		else if (arr[mid] > key)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标为:%d", mid);
//			break;
//		}
//	}
//	return -1;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	(void)scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	int a = 1;
//	char* pa = (char*)& a;
//	if (*pa == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//#include<stdio.h>
//int CheckSystem()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = CheckSystem();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


