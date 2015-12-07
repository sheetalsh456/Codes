#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum,mult,a[23];
    cin >> n;
    for(i=0;i<=n;i++)
    {
        cin >> a[i];
    }
    sum=(-a[n-1]/a[n]);
    if (n%2==0)
    {
        mult=a[0]/a[n];
    }
    else
    {
        mult=(-a[0]/a[n]);
    }
    cout << sum << " " << mult << endl;
    return 0;
}
