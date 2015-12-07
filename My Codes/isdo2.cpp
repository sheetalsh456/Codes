#include<bits/stdc++.h>
using namespace std;
long long i,m,n,a[25000],k,c,t;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        for(i=0;i<m;i++)
        {
             scanf("%lld",&a[i]);
        }
        sort(a,a+m);
        c=0;
        i=0;
        k=m-1;
        while(i!=k)
        {
            if(a[i]==0)
                i++;
            else
            {
                c++;
                a[i]--;
                k--;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
