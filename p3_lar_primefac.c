#include <stdio.h>
#include<math.h>
int prime( long int);
int main()
{
    long int n,i;
    int s;
    n=600851475143ULL;
    for(i=(long)sqrt(n);i>=2ULL;i--)
    {
        if(n%i==0&&prime(i))
        {
                printf("%llu",i);
                break;
            
        }
    }
}

int prime(long int p)
{
    long int i;
    
    for(i=2;i<=(long)sqrt(p);i++)
    {
        if(p%i==0)
        return 0;
    }
    return 1;
    
}
