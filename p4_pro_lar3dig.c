#include <stdio.h>
int palin(int);
int main()
{
    int i,j,z=0,com;
    for(i=999;i>=100;i--)
    {
        for(j=999;j>=100;j--)
        {
            int k=palin(i*j);
            if(k==i*j)
            {
            if(com<k)
            com=k;
            }
            
            
        }
    }
    printf("%d",com);
}
int palin(int p)
{
   int d;
   int r=0;
   int q=p;
   while(p>0)
   {
       d=p%10;
       r=r*10+d;
       p=p/10;
   }
   return r;
}
