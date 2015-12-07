#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum,t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sum=1;
        for(i=2;i<=(n/k);i++)
        {
            sum+=((n/i)-k+i-1);
        }
        cout << sum << endl;
    }
    return 0;
}
