#include <stdio.h>
int main()
{
	int num;
	int n=num;
	scanf("%d",&n);
	int count=0;;
	while(n>0)
	{
		int last=n%10;
		count++;
		n=n/10;
	}
	
	printf("%d",count);
	return 0;
}