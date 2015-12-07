#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
multiset<ll>mymultiset;
multiset<ll>::iterator it;
ll i,n,sum,a,p1,p2,p;
int main()
{
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        mymultiset.insert(a) ;
    }
    sum=0;
    while(mymultiset.size()>=2)
    {
        it=mymultiset.begin();
        p1=*it;
        mymultiset.erase(it);
        it=mymultiset.begin();
        p2=*it;
        mymultiset.erase(it);
        p=p1+p2;
        if(p>=MOD)
            p=p%MOD;
        sum+=p;
        if(sum>=MOD)
            sum=sum%MOD;
        mymultiset.insert(p);
    }
    printf("%lld",sum%1000000007);
    return 0;
}
