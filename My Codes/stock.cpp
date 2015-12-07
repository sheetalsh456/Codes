#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll maxi=0,m,n,i,arr[100],t;
void stock(long long a[],long long val)
{
    if(val!=n)
    {
        stock(a,val+1);
        if(a[val-1]%2==0 && a[val+1]%2==0)
            a[val]=(a[val-1]+a[val+1])/2;
        stock(a,val+1);
    }
    else
    {
        m=0;
        for(i=1;i<=(n/2);i++)
            m+=abs(a[i]-a[n-i+1]);
        if(m>maxi)
            maxi=m;
    }
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
            scanf("%lld",&arr[i]);
        for(i=1;i<=(n/2);i++)
          maxi+=abs(arr[i]-arr[n-i+1]);
        stock(arr,2);
        printf("%lld\n",maxi);
    }
}
