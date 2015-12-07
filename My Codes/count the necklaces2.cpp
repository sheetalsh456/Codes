#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll k,ans,h,n,c,i;
ll p(ll q,ll r)
{
    if ((q==r) || (r==1))
    {
        return 1;
    }
    if (r<1 || r>q)
    {
        return 0;
    }
    return (p(n-1,k-1)+p(n-k,k));
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
    cin >> n >> k;
    for(i=k;i>=0;i--)
    {
        ans+=p(n,i);
    }
    h=1;
    ans=powerfunc(ans,h);
    cout << ans;
    return 0;
}

