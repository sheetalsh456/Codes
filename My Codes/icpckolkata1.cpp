#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll t,ans,i;
char str[1005];
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            if(isdigit(str[i]))
                ans+=(str[i]-'0');
        }
        printf("%lld\n",ans);
    }
    return 0;
}
