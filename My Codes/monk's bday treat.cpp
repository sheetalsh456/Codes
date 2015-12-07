#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll vis[100005];
vector <ll> adj[100005];
ll res=100000,i,m,n,c,j;
void bfs(int i)
{
vis[i]=1;
queue <int> q;
q.push(i);
while(!q.empty())
{
    int h=q.front();
    q.pop();
    for(int j=0;j<adj[h].size();j++)
    {
        if(vis[adj[h][j]]==0)
        {
            c++;
            bfs(adj[h][j]);
        }
    }
}

}

int main()
{
memset(vis,0,sizeof(vis));
cin >> n >> m;
for(i=1;i<=n;i++)
{
    adj[i].clear();
}
for(i=0;i<m;i++)
{
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
}
for(i=1;i<=n;i++)
{
    for(j=1;j<=100001;j++)
    {
        vis[j]=0;
    }
    c=1;
    bfs(i);
    res=min(res,c);

}
cout << res << endl;
return 0;
}
