#define ll long long
#define amt 1000000000.0
#include<bits/stdc++.h>
double chef,other,p;
ll m,t;
using namespace std;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lf",&m,&p);
        if(m==1)
        {
            chef=amt;
            other=0.0;
        }
        else
        {
            /*if(p<=0.5)
            {
                chef=(1-p)*amt;
                other=p*amt;
            }
            else
            {*/
                if(m%2==0)
                {
                    other=((1+pow(p,m-1))/(p+1))*p*amt;
                    chef=amt-other;
                }
                else if(m%2!=0)
                {
                   other=((1-pow(p,m-1))/(p+1))*p*amt;
                   chef=amt-other;
                }


        }
        printf("%.2lf %.2lf\n",chef,other);
    }
    return 0;
}
