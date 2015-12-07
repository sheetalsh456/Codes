#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,i,ans,cnt,n,arr[100005],f;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=n;
        cnt=0;
        f=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            {
                ans++;
                f++;
                if(f>0)
                    cnt+=(f-1);
            }
            else
            {
                ans+=cnt;
                cnt=0;
                f=0;
            }
        }
        ans+=cnt;
        printf("%lld\n",ans);
    }
    return 0;
}
