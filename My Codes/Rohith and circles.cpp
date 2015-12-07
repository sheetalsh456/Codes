#define lfd double
#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,n,p,b,m,i;
lfd k1,k2,k3,k4,ans,r1,r2,r3,r4,r,k;
int main()
{
    scanf("%lld",&t);
    scanf("%lld%lld%lld%lld",&n,&p,&m,&b);
    scanf("%lf%lf%lf%lf",&r1,&r2,&r3,&r4);
    k1=(-1)*(1.000000/(lfd)r1);
    k2=(1.000000/(lfd)r2);
    k3=(1.000000/(lfd)r3);
    k4=(1.000000/(lfd)r4);
    r=0;
    for(i=1;i<=t;i++)
    {
    n=(n*p)%m+b;
    switch(n)
    {
    case 1:
        r+=r1;
        break;
    case 2:
        r+=r2;
        break;
    case 3:
        r+=r3;
        break;
    case 4:
        r+=r4;
        break;
    default:
        k=(n-4)*(n-3)*(k1+k2)+(n-3)*k4-(n-4)*k3;
        r+=(1/k);
    }
    }
    printf("%lf",r);
    return 0;
}
