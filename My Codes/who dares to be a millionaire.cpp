#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll i,t,n,sum,ans,w[100005],maxi;
char str1[1000],str2[1000];
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&n);
        scanf("%s",str1);
        scanf("%s",str2);
        for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i]==str2[i])
                sum++;
        }
        maxi=0;
        for(i=0;i<=n;i++)
        {
            scanf("%lld",&w[i]);
        }
        if(sum==n)
            ans=w[n];
        else
        {
            maxi=w[0];
            for(i=1;i<=sum;i++)
            {
                if(w[i]>maxi)
                    maxi=w[i];
            }
            ans=maxi;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
