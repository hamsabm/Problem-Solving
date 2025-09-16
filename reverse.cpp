#include <bits/stdc++.h>
using namespace std;

    bool isPrime(int n) {
        //your code goes here
        if(n<=1)return false;
        int count=0;
        for(int i=1;i<=n;i++)
        {
        	if(n%i==0)
        	{
        		count+=1;
			}
		}
        return count==2;
    }



int main()
{
	int n;
	cin>>n;
	int result=isPrime(n);
	if(result) 
        cout << "true" << endl;
    else 
        cout << "false" << endl;
	return 0;
}
