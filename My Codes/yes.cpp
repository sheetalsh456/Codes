#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll i,n,sum,arr[100005];
int main()
{
    cin >> n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    if ((2*(n-1))==sum)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
