#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[1005],sum,n,t,i;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        sum=0;
        for(i=n-1;i>=0;i=i-4)
        {
            sum+=arr[i];
            if(i>0)
                sum+=arr[i-1];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
