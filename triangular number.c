#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int i, n=0;
    int k=0;
    for(i=1;;i++)
    {
        n=i*(i+1)/2;
        printf("%lld\n",n);
        k=fac(n);
        if(k>=500) break;
    }
    printf("%lld",n);
    return 0;
}
int fac(long long int t)
{
    int j,s;
    s=sqrt(t);
    long long int f=2;
    for(j=2;j<s;j++)
    {
        printf("01");
        if(t%j==0) f++ ;
    }
    f*=2;
    if(t%j==0) f++;
    return f ;
}
