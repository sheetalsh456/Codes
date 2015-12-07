#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,n,i,j,summax,summin,a[10000],cnt;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        summax=a[n-1];
        summin=a[0];
        cnt=1;
        for(i=0,j=n-1;i!=j;)
        {
           summax+=(abs(a[j]-a[i]));
           if(cnt%2!=0)
                j--;
           else
           {
               i++;
           }
           cnt++;
        }
        for(i=1;i<n;i++)
        {
            summin+=(a[i]-a[i-1]);
        }
        printf("%lld %lld\n",summax,summin);
    }
    return 0;
}
