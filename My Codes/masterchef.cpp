#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll a[100003],sum,ans,dp[502][100003];
int c[100003];
int k,l,m,n,r,ci,i,j,t;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d%d%d",&n,&k,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
            c[i]=300;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d%d%d",&l,&r,&ci);
            for(j=l;j<=r;j++)
            {
                c[j]=min(c[j],ci);
            }
        }
        j=1;
        for(i=1;i<=n;i++)
        {
            if (a[i]<0)
            {
                a[j]=-a[i];
                c[j]=c[i];
                j++;
            }
        }
        n=j-1;
        for(i=0;i<=k;i++)
        {
            for(j=0;j<=n;j++)
            {
                if (i==0 || j==0)
                {
                    dp[i][j]=0;
                }
                else if(c[j]<=i)
                {
                    dp[i][j]=max(a[j]+dp[i-c[j]][j-1],dp[i][j-1]);
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        ans=sum+dp[k][n];
        printf("%lld\n",ans);
    }
    return 0;
}
