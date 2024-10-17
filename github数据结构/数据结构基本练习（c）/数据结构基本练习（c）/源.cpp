#include<stdio.h>
#include<string.h>
int main()
{
	int n = 0,m=0,e=0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	char arr[1000] = { 0 };
	char arr1[1000] = { 0 };
	int  next[1000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf_s("%c", &arr[i],1);
	}
	for (int i = 0; i < m; i++)
	{
		scanf_s("%c", &arr1[i],1);
	}
	next[0] = -1;
	next[1] = 0;//kmp中next数组第一位固定为0
	int i = 1, j = 0;
	while (i<m)
	{
		if (j == 0 || arr1[i] == arr1[j])//j=0为next数组第二位固定为1
		{
			j++;
			i++;
			next[i] = j;
		}
		else
			j = next[j];
	}
	for (int i = 0; i <= m; i++)
	{
		printf("%d", next[i]);
			
	}

	return 0;
}