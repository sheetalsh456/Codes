#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,n,k,arr[100004],i;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        if(k%2==0)
        {
            for(i=k/2;i<=(n-1-k/2);i++)
            {
                printf("%lld ",arr[i]);
            }
        }
        else
        {
            for(i=n-1-k/2;i>=((k/2)+1);i--)
            {
                printf("%lld ",arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
