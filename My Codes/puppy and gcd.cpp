#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll gcd,n,d,t,i,j,cnt;
ll gcdfunc(ll a,ll b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&d);
        cnt=0;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                gcd=gcdfunc(i,j);
                if(gcd==d)
                {
                    cnt++;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
