#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int p=0,p1=2;
    int i,n  ;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        p1 = pow(2,i);
        p += p1;
        printf("\n%lld",p1);
    }
        p += p1;
        printf("\n\n\n%lld",p);
    return 0;
}
