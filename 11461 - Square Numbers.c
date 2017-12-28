#include <stdio.h>
#include <math.h>
int main()
{
    int A,B,i,x,n;
    while(scanf("%d%d",&A,&B)==2)
    {
        if(A+B==0)
        break;
        x=0;
        for(i=A;i<=B;i++)
        {
           n=sqrt(i);
           if(n*n==i)
           x++;
        }
        printf("%d\n",x);
    }
    return 0;
}

