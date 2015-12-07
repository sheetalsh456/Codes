#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll arr[101];
int main()
{
    int m1,x,y,t,i,cnt,m[10],j;
    scanf("%d",&t);
    while(t--)
    {
        memset(arr,0,101);
        for(i=1;i<=100;i++)
        {
            arr[i]=0;
        }
        scanf("%d%d%d",&m1,&x,&y);
        for(j=0;j<m1;j++)
        {
            scanf("%d",&m[j]);
        }
        for(j=0;j<m1;j++)
        {
        if (((m[j]-(x*y))>=1) && ((m[j]+(x*y)<=100)))
        {
            for(i=m[j]-x*y;i<=m[j]+x*y;i++)
            {
                arr[i]=1;
            }
        }
        else if(m[j]-x*y>=1)
        {
            for(i=m[j]-x*y;i<=100;i++)
            {
                arr[i]=1;
            }
        }
        else if (m[j]+x*y<=100)
        {
            for(i=1;i<=m[j]+x*y;i++)
            {
                arr[i]=1;
            }
        }
        else
        {
            for(i=1;i<=100;i++)
            {
                arr[i]=1;
            }
        }
        }
        cnt=0;
        for(i=1;i<=100;i++)
        {
            if(arr[i]==0)
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
