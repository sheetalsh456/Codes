#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[10001];
ll n,i;
int main()
{
    cin >> n;
    for(i=0;i<((n-1)*2);i++)
    {
        cin >> arr[i];
    }
    cout << n-1;
    return 0;
}
