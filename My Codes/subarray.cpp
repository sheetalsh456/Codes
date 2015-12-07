#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[100000];
int main()
{
    int sum1,sum2,n,j,t,i,max_so_far,max_ending_here,neg;
    cin >> t;
    while(t--)
    {
        cin >> n;
        max_ending_here=0;
        max_so_far=0;
        sum2=0;
        neg=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if (arr[i]>0)
            {
                sum2+=arr[i];
            }
            else
            {
                neg++;
            }
        }
        if (sum2==0)
        {
            sum2=arr[0];
            for(i=1;i<n;i++)
            {
                if (arr[i]>sum2)
                {
                    sum2=arr[i];
                }
            }
        }
        if (neg==n)
        {
            sum1=arr[0];
            for(i=1;i<n;i++)
            {
                if (arr[i]>sum1)
                {
                    sum1=arr[i];
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
            max_ending_here+=arr[i];
            if (max_ending_here<0)
            {
                max_ending_here=0;
            }
            else if (max_so_far<max_ending_here)
            {
                max_so_far=max_ending_here;
            }
        }
        sum1=max_so_far;

        }

        printf("%d %d\n",sum1,sum2);
    }
    return 0;
}
