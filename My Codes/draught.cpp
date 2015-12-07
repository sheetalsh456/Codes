#include <iostream>
#include <queue>
#include<cstring>
#include<vector>
using namespace std;
int vis[100001];
vector <int> adj[100001];
int checkarr[50000];
int rooms[50000];
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

int main() 
{
int n,m,sum,furik,h,y,z,finalans,check;
vector<int>vec;
cin>>n>>m;
sum=0;
memset(rooms,0,n);
memset(vis,0,n);
for (int g=0;g<n;g++)
{
	cin >> rooms[g];
	sum+=rooms[g];
}
furik=sum*(sum-1)/2;
cout << furik << " ";
for(int i=0;i<m;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int ans=0;
for(int i=1,h=1;i<=n;i++)
{
    vec[h-1]=i;
    if(vis[i]==0) 
   {
        bfs(i);
        ans++;
        if (i>1)
        {
        	vec[h-1]=-1;
        	vec[h]=i;
        	h+=1;
		}
        
    }
    h+=1;
}
check=0;
memset(checkarr,0,ans);
for (y=0,z=0;y<vec.size();y++)
{
	if (vec[y]==-1)
	{
		vec.erase(vec.begin()+y);
		checkarr[z]=check;
		check=0;
		y--;
		z++;
	}
	else
	{
		check+=rooms[y];
	}
}
finalans=0;
for (y=0;y<ans;y++)
{
	if (checkarr[y]>1)
	{
		finalans+=checkarr[y];
	}
}
cout << finalans;
return 0;
}


