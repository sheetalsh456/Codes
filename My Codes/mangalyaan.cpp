#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,n,p,cnt,input,i;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        cnt=0;
        scanf("%lld%lld",&n,&p);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&input);
            if(input>=p)
                cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
