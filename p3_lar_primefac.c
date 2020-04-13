#include <stdio.h>
int prime(unsigned long long int);
int main()
{
    unsigned long long int n,i;
    int s;
    n=600851475143ULL;
    for(i=n;i>=1ULL;i--)
    {
        if(n%i==0)
        {
            s=prime(i);
            if(s==2)
            {
                printf("%llu",i);
                break;
            }
        }
    }
}
int prime(unsigned long long int p)
{
    long int i;
    int c=0;
    for(i=1;i<=p;i++)
    {
        if(p%i==0)
        c++;
    }
    return c;
}
