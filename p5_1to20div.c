
#include <stdio.h>
int check(long int);
int main()
{
    long int i;
    int k;
    for(i=20ULL;;i++)
    {
        k=check(i);
        if(k==1)
        {
            printf("%ld",i);
            break;
        }
    }
}
int check(long int p)
{
    int r=0,i;
    for(i=1;i<=20;i++)
    {
        if(p%i!=0)
        r=1;
    }
    if(r==1)
    return 0;
    else
    return 1;
}
