#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t;
int main()
{
    string a[8];
    int i;
    cin >> t;
    while(t--)
    {
        for(i=0;i<6;i++)
        {
            cin >> a[i];
        }
        if (((a[0]==a[2])&& (a[2]==a[4])) || ((a[0]==a[2]) && (a[2]==a[5])) || ((a[0]==a[3]) && (a[3]==a[4])) || ((a[0]==a[3]) && (a[3]==a[5])) || ((a[1]==a[3]) && (a[3]==a[4])) || ((a[1]==a[3]) && (a[3]==a[5])) || ((a[1]==a[2]) && (a[2]==a[4]))
                || ((a[1]==a[2]) && (a[1]==a[5])))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
    }
    return 0;
}
