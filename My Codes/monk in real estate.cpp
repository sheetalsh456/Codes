#define ll long long
#include<bits/stdc++.h>
using namespace std;
set<ll>sets;
ll t,i,m;
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> m;
        for(i=0;i<m;i++)
        {
            ll a,b;
            cin >> a >> b;
            sets.insert(a);
            sets.insert(b);
        }
        cout << sets.size() << endl;
        sets.clear();
    }
}
