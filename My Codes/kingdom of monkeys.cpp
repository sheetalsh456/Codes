#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll vis[100005];
vector <ll> adj[100005];
ll t,i,m,n,maxi,j,arr[100005],ans;
ll bfs(int i)
{
vis[i]=1;
queue <int> q;
q.push(i);
ll res=arr[i];
while(!q.empty())
{
    int h=q.front();
    q.pop();
    for(int j=0;j<adj[h].size();j++)
    {
        if(vis[adj[h][j]]==0)
        {
            vis[adj[h][j]]=1;
            q.push(adj[h][j]);
            res+=arr[adj[h][j]];
        }
    }
}
return res;
}

int main()
{

cin>>t;
while(t--)
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
    adj[b].push_back(a);
}
for(i=1;i<=n;i++)
{
    cin >> arr[i];
}
ans=0;
ll res1=0;
for(i=1;i<=n;i++)
{
    if (vis[i]==0)
    {
        res1=max(res1,bfs(i));
        ans++;
    }
}
cout << res1 << endl;

}
return 0;
}
