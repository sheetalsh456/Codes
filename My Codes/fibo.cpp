#define ll long long
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    ll c;
    cin >> a >> b >> n;
    if (a>=0 && b>=0 && a<=2 && b<=2 && n>=3 && n<=20)
    {
        for(int i=3;i<=n;i++)
        {
            c=(b*b)+a;
            a=b;
            b=c;
        }
    cout << c << endl;
    }
    return 0;
}
