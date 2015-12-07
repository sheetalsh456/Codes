#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,t;
int main()
{
    int k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if (k==0)
        {
            cout << "Airborne wins." << endl;
        }
        else
        {
            cout << "Pagfloyd wins." << endl;
        }
    }
    return 0;
}
