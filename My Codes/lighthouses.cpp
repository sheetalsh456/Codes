#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll a,b,xmin,ymin,xmax,ymax,isnoxmax,isnoymax,isnoxmin,isnoymin,x_ymin,y_xmin,x_ymax,y_xmax,i,n,t,ans;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld%lld",&xmin,&ymin);
        y_xmin=ymin;
        x_ymin=xmin;
        xmax=xmin;
        x_ymax=xmin;
        ymax=ymin;
        y_xmax=ymin;
        isnoxmax=isnoymax=isnoxmin=isnoymin=1;
        for(i=2;i<=n;i++)
        {
            scanf("%lld%lld",&a,&b);
            if(a>=xmax)
            {
                isnoxmax=i;
                xmax=a;
                y_xmax=b;
            }

            else if(a<=xmin)
            {
                isnoxmin=i;
                xmin=a;
                y_xmin=b;
            }
            if(b>=ymax)
            {
                isnoymax=i;
                ymax=b;
                x_ymax=a;
            }
            else if(b<=ymin)
            {
                isnoymin=i;
                ymin=b;
                x_ymin=a;
            }
        }
        if((x_ymax<=x_ymin)&&(y_xmin>=y_xmax))
        {
            if(xmin==x_ymax)
                printf("1\n%lld SE\n",isnoymax);
            else if(xmax==x_ymin)
                printf("1\n%lld NW\n",isnoymin);
            else if(ymin==y_xmax)
                printf("1\n%lld NW\n",isnoxmax);
            else if(ymax==y_xmin)
                printf("1\n%lld SE\n",isnoxmin);
            else
                printf("2\n%lld SE\n%lld NW\n",isnoxmin,isnoxmax);
        }
        else if((x_ymax>=x_ymin)&&(y_xmin>=y_xmax))
        {
            if(ymin==y_xmax)
                printf("1\n%lld NW\n",isnoxmax);
            else if(ymax==y_xmin)
                printf("1\n%lld SE\n",isnoxmin);
            else if(xmin==x_ymin)
                printf("1\n%lld NE\n",isnoymin);
            else if(xmax==x_ymax)
                printf("1\n%lld SW\n",isnoymax);
            else
                printf("2\n%lld SW\n%lld NE\n",isnoymax,isnoymin);
        }
        else if((x_ymin>=x_ymax)&&(y_xmax>=y_xmin))
        {
            if(xmin==x_ymax)
                printf("1\n%lld SE\n",isnoymax);
            else if(xmax==x_ymin)
                printf("1\n%lld NW\n",isnoymin);
            else if(ymax==y_xmax)
                printf("1\n%lld SW\n",isnoxmax);
            else if(ymin==y_xmin)
                printf("1\n%lld NE\n",isnoxmin);
            else
                printf("2\n%lld SW\n%lld NE\n",isnoxmax,isnoxmin);
        }
        else if((x_ymax>=x_ymin)&&(y_xmax>=y_xmin))
        {
            if(xmin==x_ymin)
                printf("1\n%lld NE\n",isnoymin);
            else if(xmax==x_ymax)
                printf("1\n%lld SW\n",isnoymax);
            else if(ymax==y_xmax)
                printf("1\n%lld SW\n",isnoxmax);
            else if(ymin==y_xmin)
                printf("1\n%lld NE\n",isnoxmin);
            else
                printf("2\n%lld SW\n%lld NE\n",isnoxmax,isnoxmin);
        }


    }
    return 0;
}
