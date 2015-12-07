#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll lcm,n,q,i,j,l,r,arr[100003],k;
int check;
ll lcmfunc(ll a1,ll b1)
{
    ll a=a1;
    ll b=b1;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return (a/(a1*b1));
}
int main()
{
    scanf("%lld%lld",&n,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=1;i<=q;i++)
    {
        lcm=1;
        scanf("%lld%lld",&l,&r);
        for(j=l;j<=r;j++)
        {
            check=0;
            for(k=j+1;k<=r;k++)
            {
                if(arr[j]==arr[k])
                {
                    check=1;
                    break;
                }
            }
            if(check!=1)
            {
                lcm=lcmfunc(lcm,arr[j]);
            }
        }
        printf("%lld\n",(lcm%3));

    }
    return 0;
}
