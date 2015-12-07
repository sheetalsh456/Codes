#define ll long long
#include<bits/stdc++.h>
using namespace std;
double h,k;
ll cnt,t;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf%lf",&h,&k);
        cnt=0;
        while(h>=1.0)
        {
            h=h/k;
            cnt++;
        }
        printf("%lld",cnt);
    }
}
