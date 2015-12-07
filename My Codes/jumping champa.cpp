#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,i,n,q,ans,arr[3000005];
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&q);
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        ans=0;
        if(n>1)
        {
            sort(arr,arr+n);
            for(i=0;i<n-1;i++)
                ans+=((q*(abs(arr[i]-arr[i+1]))));
        }
        printf("%lld\n",ans);
    }
    return 0;
}
