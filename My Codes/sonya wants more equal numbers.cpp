#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[100005],n,i,j,sum,input[1003],maxi;
int main()
{
    scanf("%lld",&n);
    memset(arr,0,100005);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&input[i]);
        arr[input[i]]++;
    }
    sum=0;
    for(i=0;i<n-1;i++)
    {
        sum=input[i];
        for(j=i+1;j<n;j++)
        {
            sum+=input[j];
            arr[sum]++;
        }
    }
    maxi=arr[0];
    for(i=1;i<100005;i++)
    {
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    printf("%lld\n",maxi);
    for(i=0;i<100005;i++)
    {
        if(arr[i]==maxi)
        {
            printf("%lld ",i);

        }
    }
}
