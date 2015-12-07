#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll a[100003],query[1003],i,j,n,m,p,k,ans,xor1[100000000],len;
int main()
{
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    p=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i==j)
            {
                xor1[p]=a[j]^a[j];
                p++;
            }
            else
            {
                xor1[p]=a[i];
                for(k=i+1;k<=j;k++)
                {
                    xor1[p]^=a[k];
                }
                p++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld",&query[i]);
    }
    for(i=0;i<m;i++)
    {
        ans=0;
        for(j=0;j<p;j++)
        {
            if(query[i]==xor1[j])
            {
                ans++;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
