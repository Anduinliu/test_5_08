 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat
//	//strncat
//	strncat(str1, str1,6);//abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	
//	//strstr - 找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右递增的，矩阵从上到下是递增的，
//请编写程序在这个矩阵中查找某个数字是否存在
//要求：时间复杂度小于0（N）
//int findnum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x<=*px-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	//返回型参数
//	int ret = findnum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是: %d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//size_t == unsigned int 无符号数
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str!=NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	/*char arr[] = { 'a','b','c','d','e','f' };
//	int len = strlen(arr);*/
//	printf("%d\n", len);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间,包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//错误示范
//	char arr2[] = { 'b','i','t' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<assert.h>
//char*  my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src != NULL);
//
//	//1. 找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//
//	}
//	
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	//  >  1
//	// ==  0
//	//  <  -1
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//比较
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else//(*str1 < *str2)
//		return -1;//小于
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//
//}
//int main()
//{
//	char arr1[5] = "abc";
//	char arr[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	int ret = strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}