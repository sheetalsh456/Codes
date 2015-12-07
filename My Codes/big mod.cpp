#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll a,m,b,res;
int main()
{
    scanf("%lld&lld",&a,&m);
    res=1;
    a%=m;
    printf("%lld",a);
    b=1;
    while(b)
    {
        if(b&1)
            res=(res*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    printf("%lld",res);
    return 0;


}
