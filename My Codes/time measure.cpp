#include<bits/stdc++.h>
using namespace std;
double angle,hour,minute,diff;
int i,j;
long long t;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lf",&angle);
        hour=0.0;
        for(i=0;i<12;i++)
        {
            minute=0.0;
            for(j=0;j<60;j++)
            {
                diff=abs(minute-hour);
                if(abs(diff-angle)<=(1.0/120.0) || abs(diff-360.0+angle)<=(1.0/120.0))
                {
                    if(!(i/10))
                        printf("0");
                    printf("%d:",i);
                    if(!(j/10))
                        printf("0");
                    printf("%d\n",j);
                }
                minute+=6.0;
                hour+=0.5;
            }
        }
    }
    return 0;
}
