#include <stdio.h>

int main()
{
    int i,j,k,z=0;
    for(i=1;i<1000;i++)
    {
        for(j=2;j<1000;j++)
        {
            for(k=3;k<1000;k++)
            {
                if(i*i+j*j==k*k&&i+j+k==1000)
                {
                    printf("%d ",i*j*k);
                    z=1;
                }
                if(z==1)
                {
                    break;
                }
            }
        }
    }
}
