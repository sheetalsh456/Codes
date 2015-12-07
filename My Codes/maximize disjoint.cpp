#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll i,n,d,j,arr[100003],cnt,t;
int main()
{

    scanf("%lld",&t);
    while(t--)
    {
        cnt=0;
        scanf("%lld%lld",&n,&d);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        i=n-1;
        j=i-1;
        while(i>=1)
        {
            if(arr[i]!=0 && arr[j]!=0 && (arr[i]-arr[j]<d))
            {
                cnt+=(arr[i]+arr[j]);
                arr[i]=0;
                arr[j]=0;
                i--;
                j=i-1;
            }
            else if ((arr[i]!=0 && arr[j]!=0 && (arr[i]-arr[j]>=d)) || (j==0))
            {
                i--;
                j=i-1;
            }
            else if(arr[i]==0)
            {
                i--;
                j=i-1;
            }
            else if(arr[j]==0)
            {
                j--;
            }
            else
            {
                j--;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
