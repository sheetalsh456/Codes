#include <iostream>
using namespace std;

char a[1001][1001];
int dp[1001][1001];

int sx,sy,ex,ey;
int n,m;

void solve(int x,int y)
{
if(x>=n||y>=m||x<0||y<0||a[x][y]=='#')
    return;

if(x+1<n && 1+dp[x][y]<dp[x+1][y])
{       
    dp[x+1][y]=1+dp[x][y];
    solve(x+1,y);
}   

if(y+1<m && 1+dp[x][y]<dp[x][y+1])
{       
    dp[x][y+1]=1+dp[x][y];
    solve(x,y+1);
}

if(x-1>=0 && 1+dp[x][y]<dp[x-1][y])
{       
    dp[x-1][y]=1+dp[x][y];
    solve(x-1,y);
}

if(y-1>=0 && 1+dp[x][y]<dp[x][y-1])
{       
    dp[x][y-1]=1+dp[x][y];
    solve(x,y-1);
}


}

int main() {

cin>>n>>m;
string s;
for(int i=0;i<n;i++)
{
    cin>>s;
    for(int j=0;j<m;j++)
    {
        dp[i][j]=10000001;
        a[i][j]=s[j];
        if(a[i][j]=='S')
        {
            sx=i;
            sy=j;
        }
        if(a[i][j]=='E')
        {
            ex=i;
            ey=j;
        }

    }
}
dp[ex][ey]=0;
solve(ex,ey);
if(dp[sx][sy]==10000001)
    cout<<-1<<endl;
else
{
    cout<<dp[sx][sy]<<endl;
}
return 0;
}
