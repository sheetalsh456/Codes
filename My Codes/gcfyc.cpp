#define ll long long
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
ll a,n,i,j,t,fact,fact1,k,sum,aprev;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        fact=0;
        scanf("%lld%lld",&a,&n);
        sum=0;
        fact=1;
        for(k=1;k<=a;k++)
            fact=fact*k;
       aprev=a+1;
        sum=aprev+1;
        for (j=aprev+1;j<=n;j++)
        {
            aprev=aprev*j;
            sum+=aprev;
            if(sum>mod)
              sum=sum%mod;
        }
            sum=sum*fact;
            if(sum>mod)
              sum=sum%mod;
        printf("%lld\n",(sum));
    }
    return 0;
}

