#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll i,m,n,a[20003],j,cnt,t;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+m);
        cnt=0;
        i=0;
        j=m-1;
        while(i!=j)
        {
            if(a[i]==0)
                i++;
            else
            {
                cnt+=1;
                a[i]--;
                j--;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
