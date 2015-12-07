#include<bits/stdc++.h>
using namespace std;
main()
{
    long long i1,k1,m1;
    double ai,bi,ak,bk,x,y,val,power,s,result,sum;
    x=sqrt(2);
    y=sqrt(3);
    scanf("%lld%lld%lf%lf%lf",&i1,&k1,&s,&ai,&bi);
    if(k1>i1)
    {
        m1=k1-i1;
        if(m1%2==0)
        {
            sum=ai+bi;
            result= pow(2,2*m1-s)*sum;
        }
        else
        {
            m1=m1-1;
            result = pow(2,(2*m1-s+1))*(ai*sqrt(2)+bi*sqrt(6));
        }
    }
    else if(i1==k1)
    {
        result= (ai+bi)/pow(2,s);
    }
    else
    {
        m1=i1-k1;
        if(m1%2==0)
        result = (ai+bi)/pow(2,2*m1+s);
        else
        {
            result =(ai*sqrt(2)+bi*sqrt(6))/pow(2,s+2*(m1-1)+3);
        }
    }
    printf("%lf",result);
    return 0;
}

