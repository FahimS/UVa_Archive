/*
#include<stdio.h>
int main()
{
    int a,b,T,i,sum=0;
    scanf("%d",&T);
    for(a=0;a<T;a++)
    {
        scanf("%d %d",&a,&b);
    }
    for(i=a;i<=b;i++)
        {
            if(i%2==1)
                sum=sum+1;
        }
        printf("Case :%d\n",i+1,sum);

    return 0;
} */
#include<stdio.h>
int main()
{
    long long int a,b,t,sum,i,j;
    scanf("%lld",&t);
    for( i=1;i<=t;i++)
    {
        sum = 0;
        scanf("%lld%lld",&a,&b);
        for( j=a;j<=b;j++)
        {
            if(j%2==1)
                sum+=j;
        }
         printf("Case %lld: %lld\n",i,sum);
    }
    return 0;
}
