#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num)
{
    if(num <= 1)
        return false;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    scanf("%d", &num);
    int count = 0;
    for(int i = 2; i <= num; i++) 
    {
        if(isPrime(i))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
