#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[100003];
int main()
{
    int sum,counter,n,k,i,t,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            counter=0;
            scanf("%d",&arr[i]);
            while(arr[i]!=0)
            {
                arr[i]=arr[i]&(arr[i]-1);
                counter++;
            }
            arr[i]=counter;
        }
        sort(arr,arr+n);
        sum=0;
        i=n-1;
        j=0;
        while(j!=k)
        {
            sum+=arr[i];
            j++;
            i--;
        }
        printf("%d\n",sum);
    }
    return 0;
}
