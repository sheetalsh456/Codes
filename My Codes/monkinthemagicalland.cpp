#include<bits/stdc++.h>
#define ll long long
ll t,i,j,m,n,k,k1,sumans,ans,sum[1000],x[1000],c[1000],z[1000],smaller;
using namespace std;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&m,&k1);
        for(i=0;i<n;i++)
        {
            sum[i]=0;
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld",&c[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld",&z[i]);
        }
        for(i=0;i<n;i++)
        {
            sum[i]=0;
            for(j=0;j<m;j++)
            {
                ans=0;
                smaller=(x[i]<=c[j])?x[i]:c[j];
                for(k=2;k<=smaller;k++)
                {
                    if(x[i]%k==0 && c[j]%k==0)
                    {
                        ans=1;
                        break;
                    }
                }
                if (ans==1)
                {
                    sum[i]+=z[j];
                    z[j]=0;
                }
            }
        }
        sort(sum,sum+n);
        i=n-1;
        j=0;
        sumans=0;
        while(j!=k1)
        {
            sumans+=sum[i];
            j++;
            i--;
        }
        printf("%lld\n",sumans);
    }
    return 0;
}
