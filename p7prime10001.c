#include <stdio.h>
int prime(long int);
int main()
{
    unsigned long int i=2,c=0;
    while(i>0)
    {
        c+=prime(i);
        if(c==10001)
        {
            printf("%ld",i);
            break;
        }
        i++;
    }
}
int prime(long int n)
{
    long int i,c=0;
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
