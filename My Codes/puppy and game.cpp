#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,a,b;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a%2!=0 && b%2!=0)
        {
            printf("Vanka\n");
        }
        else if(a%2==0 && b%2!=0)
        {
            printf("Tuzik\n");
        }
        else if(a%2!=0 && b%2==0)
        {
            printf("Tuzik\n");
        }
        else if(a%2==0 && b%2==0)
        {
            printf("Tuzik\n");
        }
    }
    return 0;
}
