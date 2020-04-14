
#include <stdio.h>
int primes(unsigned long long int);
int main()
{
    unsigned long long int i=2ULL,sum=0;
    int k;
    while(i<=2000000)
    {
        k=primes(i);
        if(k==1)
        sum=sum+i;
        printf("%lld %lld  ",i,sum);
        if(i>=2000000)
            break;
        else
            i++;
    }
    printf(" %lld",sum);
}
int primes(unsigned long long int n)
{
    long int i;
    int c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
