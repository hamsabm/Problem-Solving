#include <stdio.h>
void pattern(int n)
{
	int stars,space;
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d ",&n);
	pattern(n);
	return 0;
}