#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,i,arr[100004],n,cnt,maxi;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        maxi=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]>maxi)
                maxi=arr[i];
        }
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==maxi)
                cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
