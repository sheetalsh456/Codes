#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,b,c,a;
int main()
    {
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll res=1;
        a=2;
        b=n-1;
        c=(ll)1e9+7;
        a%=c;
        while(b)
        {
            if(b&1)
            {
                res=(res*a)%c;
            }
            a=(a*a)%c;
            b/=2;
        }
        cout << res << endl;
    }
    return 0;
    }
