#define ll long long
#define inf 0x7fffffff
#include<bits/stdc++.h>
using namespace std;
int t,i,j,k;
ll qua,qub,n,q,c;
vector<ll>tree;
vector<ll>arr;
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
    tree[node]=min(tree[node*2],tree[node*2+1]);

}
ll query_tree(ll node,ll a,ll b,ll i,ll j)
{
    if ((a>j) || (b<i))
    {
        return inf;
    }
    if (a>=i && b<=j)
    {
        return tree[node];
    }
    ll q1=query_tree(2*node,a,(a+b)/2,i,j);
    ll q2=query_tree(2*node+1,((a+b)/2)+1,b,i,j);
    ll res=min(q1,q2);
    return res;
}
int main()
{
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        arr.push_back(0);
        scanf("%lld%lld",&n,&q);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&c);
            arr.push_back(c);
            tree.push_back(0);
        }
        for(k=1;k<=n;k++)
        {
            tree.push_back(0);
        }
        build_tree(1,1,n);
        printf("Scenario #%d:\n",j);
        for(i=1;i<=q;i++)
        {
            scanf("%lld%lld",&qua,&qub);
            printf("%lld\n",query_tree(1,1,n,qua,qub));
        }
        arr.clear();
        tree.clear();
    }
    return 0;
}
