#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>b){
            printf("%d\n", a-b);
        }
        else
        {
            printf("%d\n", b-a);
        }
    }
    return 0;
}
