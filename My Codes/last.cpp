#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,i,j;
    int v[22][10];
    int w[10],sum[10];
    cin >> m >> n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        cin >> w[i];
    }
    for(i=0;i<n;i++)
    {
        sum[i]=0;
        for(j=0;j<m;j++)
        {
            sum[i]+=v[j][i];
        }

    }
    p=0;
    for(i=0;i<n;i++)
    {
        if(sum[i]!=w[i])
        {
            p=1;
            break;
        }
    }
    if (p==0)
    {
        cout << "aaa";
    }
    return 0;
}
