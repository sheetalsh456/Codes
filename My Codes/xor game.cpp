#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll a1,a2,a3,n,m,arr[100003],ans[100003],i,v,k;
vector<ll>tree;
void build_tree(ll node,ll a,ll b)
{
    if(a>b)
        return;
    if(a==b)
    {
        tree[node]=arr[a];
        return;
    }
    build_tree(2*node,a,(a+b)/2);
    build_tree(2*node+1,((a+b)/2)+1,b);
    tree[node]=tree[node*2]^tree[node*2+1];
    return;
}
void update(ll node,ll a,ll b,ll qua,ll qub,ll v)
{
    if(a>qub || b<qua)
        return;
    if(a==b)
    {
        tree[node]=v;
        return;
    }
    update(node*2,a,(a+b)/2,qua,qub,v);
    update(node*2+1,(((a+b)/2)+1),b,qua,qub,v);
    tree[node]=tree[node*2]^tree[node*2+1];
}
ll query(ll node,ll a,ll b,ll qua,ll qub)
{
    if(a>qub || b<qua)
        return 0;
    if(a>=qua && b<=qub)
    {
        return tree[node];
    }
    ll res=query(node*2,a,(a+b)/2,qua,qub)^query(node*2+1,(((a+b)/2)+1),b,qua,qub);
    return res;
}
int main()
{
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        tree.push_back(0);
    }
    for(i=1;i<=n;i++)
    {
        tree.push_back(0);
    }
    k=1;
    build_tree(1,1,n);
    for(i=1;i<=m;i++)
    {
        scanf("%lld%lld%lld",&a1,&a2,&a3);
        if(a1==0)
        {
            ans[k]=query(1,1,n,a2,a3);
            k++;
        }
        else if (a1==1)
        {
            v=(tree[1]^arr[a2])^a3;
            arr[a2]=v;
            update(1,1,n,a2,a2,v);
        }
    }
    for(i=1;i<k;i++)
    {
        printf("%lld\n",ans[i]);
    }
    return 0;
}
