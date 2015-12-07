#define ll long long
#include<bits/stdc++.h>
using namespace std;
int n,i,sum,j;
ll a[100003],x[100003];
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x[i],&a[i]);
    }
    for(i=1;i<=n;i++)
    {
       if (x[i]!=0)
          break;
     }
     sum=a[i];
    if(x[i]>0)
    {
        for(j=2;j<=n;j++)
        {
            if(j%2==0 && x[j]<x[j-1])
                sum+=a[j];
            else if(j%2!=0 && x[j]>x[j-1])
                sum+=a[j];
            else
                break;
        }
    }
    else if(x[i]<0)
    {
        for(j=2;j<=n;j++)
        {
            if(j%2==0 && x[j]>x[j-1])
                sum+=a[j];
            else if(j%2!=0 && x[j]<x[j-1])
                sum+=a[j];
            else
                break;
        }
    }
    printf("%d",sum);
    return 0;
}
