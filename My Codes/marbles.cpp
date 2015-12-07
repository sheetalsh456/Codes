#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll f,n,k,p,ans,t,i;
ll ncr(ll n,ll r)
{
    if (n<r)
    {
        return 0;
    }
    if (r>n/2)
    {
        r=n-r;
    }
    if (r==0)
    {
        return 1;
    }
    ll result=1;
    for(ll i=1;i<=r;i++)
    {
        result*=(n-i+1);
        result/=i;
    }
    return result;

}
int main()
{

    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        p=n-k;
        ans=ncr(p+k-1,k-1);
        cout << ans << endl;
    }
    return 0;
}
