#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,a,i;
int main()
{
    int c,p;
    scanf("%lld",&n);
    p=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a==1)
            p=1;
    }
    c=-1;
    if(p==1)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",p);
    }
    return 0;
}
