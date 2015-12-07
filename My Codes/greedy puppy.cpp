#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,k,maxi,i;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        maxi=0;
        for(i=2;i<=k;i++)
        {
            maxi=max(maxi,n%i);
        }
        printf("%lld\n",maxi);
    }
    return 0;
}
