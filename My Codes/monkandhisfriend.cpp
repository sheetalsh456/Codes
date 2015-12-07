#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll m,p,ans,t,counter;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&m,&p);
        ans=m^p;
        counter=0;
        while(ans!=0)
        {
            ans=ans&(ans-1);
            counter++;
        }
        printf("%lld\n",counter);
    }
    return 0;
}
