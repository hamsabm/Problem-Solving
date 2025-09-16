#include <stdio.h>
int main()
{
	int n,rev=0;;
	scanf("%d",&n);
	int original=n;
	while(n!=0)
	{
		int last=n%10;
		rev=rev*10+last;
		n=n/10;
	}
	if(original==rev) printf("Palindrome");
	else if(original<0) printf("Invalid");
	else printf("NO");
	return 0;
}