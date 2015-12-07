#include<bits/stdc++.h>
using namespace std;
pair<int,int>*p;
int a,b;
int main()
{
    int i,check;
    p=new pair<int,int>[100001];
    for(i=0;i<5;i++)
    {
        scanf("%d%d",&a,&b);
        p[i]=make_pair(a,b);
    }
    sort(p,p+5);
    check=0;
    for(i=0;i<4;i++)
    {
        if(p[i].first==p[i+1].first)
        {
            continue;
        }
        else if(p[i].second>=p[i+1].second)
        {
            check=1;
            break;
        }
    }
    if(check==1)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;

}
