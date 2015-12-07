#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[100001],num,i,l,r,t,temp,j,sum;
int main()
{
    memset(arr,0,100001);
    for(i=1;i<=100000;i++)
    {
        num=i;
        temp=0;
        while(num)
        {
            temp=temp*10;
            temp+=(num%10);
            num=num/10;
        }
        if(i==temp)
            arr[i]++;
    }
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld%lld",&l,&r);
        for(j=l;j<=r;j++)
        {
            if(arr[j]>0)
                sum+=j;
        }
        printf("%lld\n",sum);
    }
    return 0;

}
