#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,m,q,i,j,temp,pairs,t,k,v,s1,s2,l,r,a[100005],b[100005];
void binarysearch(ll arr[],ll low,ll high,ll s11,ll s22)
{
    while(high>=low)
    {
        ll mid=(low+high)/2;
        if(arr[mid]>=s11 && arr[mid]<=s22)
            pairs++;
        if(arr[mid]<s11)
            low=mid+1;
        else if(arr[mid]>s22)
            high=mid-1;
    }
 return;
}
int main()
{
    scanf("%lld%lld%lld",&n,&m,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1;i<=m;i++)
    {
        b[i]=i;
    }
    while(q--)
    {
        pairs=0;
        scanf("%lld",&t);
        if(t==1)
        {
            scanf("%lld%lld",&k,&v);
            a[k]=v;
        }
        else if (t==2)
        {
            scanf("%lld%lld",&s1,&s2);
            for(i=1;i<=n;i++)
            {
                binarysearch(b,1,m,s1-a[i],s2-a[i]);
            }
            printf("%lld\n",pairs);
        }
        else if(t==3)
        {
            scanf("%lld%lld",&l,&r);
            /*for(i=l,j=0;i<=(l+((r-l)/2));i++,j++)
            {
                temp=b[l+j];
                b[l+j]=b[r-j];
                b[r-j]=temp;
            }*/
        }
    }
return 0;
}
