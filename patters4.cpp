#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int stars=1,spaces=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		stars+=2;
		spaces--;
		printf("\n");
	}
	stars=stars-4;
	spaces=1;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=spaces;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=stars;j++)
		{
			printf("*");
		}
		stars-=2;
		spaces++;
		printf("\n");
	}
	return 0;
}