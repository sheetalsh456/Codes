#define ll long long
#include<bits/stdc++.h>
ll mini,t,arr[100004],i,n;
using namespace std;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        mini=100004;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]<mini)
                mini=arr[i];
        }
        printf("%lld\n",(mini)*(n-1));
    }
    return 0;
}
