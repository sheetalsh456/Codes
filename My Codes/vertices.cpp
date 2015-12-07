#include <iostream>
#include <queue>
using namespace std;
int vis[100001];
vector <int> adj[100001];
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
            vis[adj[h][j]]=1;
            q.push(adj[h][j]);
        }
    }
}
}

int main() {
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int ans=0;
for(int i=1;i<=n;i++)
    if(vis[i]==0)
    {
        bfs(i);
        ans++;
    }
cout<<ans-1<<endl;
return 0;
}
