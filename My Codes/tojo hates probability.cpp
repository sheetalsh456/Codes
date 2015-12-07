#define ll long long
#include<bits/stdc++.h>
using namespace std;
double n,m,ans;
ll t;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf%lf",&n,&m);
        if(n==1 && m==1)
            ans=1.0;
        else if(n==1 && m!=1)
            ans=m;
        else if(m==1 && n!=1)
            ans=n;
        else ans=m+n-1.0;
        printf("%.6lf\n",ans);
    }
    return 0;
}
