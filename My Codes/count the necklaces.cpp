#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll m,r,k,ans,c,h;
ll ncr(ll n,ll r)
{
    if (n<r)
        return 0;
    if (r>n/2)
        r=n-r;
    if (r==0)
        return 1;
    ll result=1;
    for(ll i=1;i<=r;i++)
    {
        result*=(n-i+1);
        result/=i;
    }
    return result;
}
ll powerfunc(ll a,ll b)
{
    ll res=1;
    c=1000000007;
    a%=c;
    while(b)
    {
        if (b&1)
            res=(res*a)%c;
        a=(a*a)%c;
        b/=2;
    }
    return res;
}
int main()
{
    cin >> m >> k;
    if (k==1)
    {
        ans=1;
    }
    else
    {
        ans=k;
        for(r=2;r<=k;r++)
        {
            ans+=ncr(m+r-1,r-1);
        }
    }
    h=1;
    ans=powerfunc(ans,h);
    cout << ans;
    return 0;
}

