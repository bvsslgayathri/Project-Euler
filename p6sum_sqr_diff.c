#include<stdio.h>
int main()
{
  unsigned long int c=0,s=0,p,i;
  for(i=1;i<=100;i++)
    {
       c+=i*i;
      s+=i;
    }
  p=s*s-c;
  printf("%ld",p);
}
