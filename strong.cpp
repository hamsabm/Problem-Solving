#include <stdio.h>
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
	
int main()
{
		int n,temp,sum=0,d;
		scanf("%d",&n);
		temp=n;
		while(temp>0)
		{
			d=temp%10;
			sum+=fact(d);
			temp/=10;
		}
		if(sum==n) printf("Strong num");
		else printf("No");
		return 0;
}
