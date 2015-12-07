#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll ans,n,f,i;
ll fact(ll m)
{
    f=1;
    for(i=1;i<=m;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    cin >> n;
    ans=((fact((2*n)-2))/(fact(n-1)*fact(n-1)))-1;
    cout << ans%((10^9)+9);
    return 0;
}
