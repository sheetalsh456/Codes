#include<bits/stdc++.h>
using namespace std;
int t,j,k,x,y,n,p,i,h;
int cnt;
set<int>s1;
set<int>s2;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=1;i<=k;i++)
        {
            scanf("%d%d",&x,&y);
            s1.insert(x+y);
            s2.insert(x-y);
        }
        cnt=0;
        h=0;
        for(set<int>::iterator it1=s1.begin();it1!=s1.end();it1++)
        {
            set<int>::iterator it2=s2.begin();
            while(it2!=s2.end())
            {
            for(j=1;j<=n;j++)
            {
                for(p=1;p<=n;p++)
                {
                    if(((j+p)==(*it1)) && ((j-p)!=(*it2)))
                    {
                        cnt++;
                    }
                    else if(((j+p)!=(*it1)) && ((j-p)==(*it2)))
                    {
                        cnt++;
                    }
                    else if(((j+p)==(*it1)) && ((j-p)==(*it2)))
                    {
                        h++;
                    }
                }
            }
            it2++;
            }
        }
        printf("%d\n",(cnt-(h-1)));

    }
    return 0;
}
