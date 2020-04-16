
#include <stdio.h>
int main()
{
    int i,s=0,r,ans=0,c=0,j,k;
    for(i=1;i<10000;i++)
    {
        
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
            s+=j;
            }
        
        }
        
        for(k=1;k<s;k++)
        {
             if(s%k==0)
            {
            c+=k;
            }
        }
        if(c==i && c!=s)
        ans+=i;
        printf("%d ",ans);
        
    }
    printf("%d",ans);
}
