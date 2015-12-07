#include <iostream>
#include <queue>
using namespace std;
int vis[100001];
int check[100001];
vector <int> adj[100001];
vector<int>vec;
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
int n,t,s,a,b,f,g,num,start,stop,ele,finalans,h;
cin >> t;
for (int i=0;i<t;i++)
{
    cin >> n >> s >> f;
for(i=0;i<f;i++)
{
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
int ans=0;
for(i=1,h=1;i<=n;i++)
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
for (int p=0;p<vec.size();p++)
{
    cout << vec[p] << endl;
}
num=vec.size()-ans+1;
cout << "num:" << num << endl;
for (h=0;h<vec.size();h++)
{
    if (vec[h]==s)
    {
        break;
    }
}
for (g=h;g>=0;g--)
{
    if (vec[g]==-1)
    {
        start=g;
        break;
    }
    if (g==0)
    {
        start=-1;
        break;
    }
}
for (int g=h;g<vec.size();g++)
{
    if (vec[g]==-1)
    {
        stop=g;
        break;
    }
    if(g==vec.size()-1)
    {
        stop=g+1;
        break;
    }
}
ele=stop-start-1;
finalans=num-ele;
cout << finalans << endl;
}
return 0;
}


