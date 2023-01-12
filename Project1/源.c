#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("今天打魔兽吗:\n");
	printf("来（1/0）\n");
	printf("注1为来0则相反");
	scanf("%d",&input);
	if (input == 1)
		printf("来");
	else
		printf("不来");
	return 0;
}