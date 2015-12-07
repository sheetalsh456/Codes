#include<bits/stdc++.h>
using namespace std;
int main()
{
    int
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if (a&(a-1)==0)
        {
            if(a>b)
            {
                ans=log(a)/log(b);
            }
            else if(a<b)
            {
                ans=log(b)/log(a);
            }
            else if(a==b)
            {
                ans=0;
            }
        }
        else
        {

        }
    }
}
