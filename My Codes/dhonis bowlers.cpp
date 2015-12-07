#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,m,x,t,i,j,cnt,arr[100005];
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        cnt=0;
        scanf("%lld%lld%lld",&n,&m,&x);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            if(((2*arr[i])%m)<=x)
                cnt+=1;
            for(j=i+1;j<n;j++)
            {
                if(((arr[i]+arr[j])%m)<=x)
                {
                        cnt+=2;
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
