#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll st,nd,n,q,i,j,arr[100005],x;
vector<ll>tree1;
vector<ll>tree2;
void build_tree(ll node,ll a,ll b)
{
    if(a>b)
        return;
    if(a==b)
    {
        tree1[node]=arr[a];
        tree2[node]=tree1[node]*tree1[node];
        return;
    }
    build_tree(2*node,a,(a+b)/2);
    build_tree(2*node+1,((a+b)/2)+1,b);
    tree2[node]=tree2[2*node]+tree2[2*node+1];
}
void update0(ll node,ll a,ll b,ll qua,ll qub,ll v)
{
    if(a>qub || b<qua)
        return;
    if(a==b)
    {
        tree1[node]=v;
        tree2[node]=tree1[node]*tree1[node];
        return;
    }
    update0(node*2,a,(a+b)/2,qua,qub,v);
    update0(node*2+1,(((a+b)/2)+1),b,qua,qub,v);
    tree2[node]=tree2[node*2]+tree2[node*2+1];
}
void update1(ll node,ll a,ll b,ll qua,ll qub,ll v)
{
    if(a>qub || b<qua)
        return;
    if(a==b)
    {
        tree1[node]+=v;
        tree2[node]=tree1[node]*tree1[node];
        return;
    }
    update1(node*2,a,(a+b)/2,qua,qub,v);
    update1(node*2+1,(((a+b)/2)+1),b,qua,qub,v);
    tree2[node]=tree2[node*2]+tree2[node*2+1];
}
ll query(ll node,ll a,ll b,ll qua,ll qub)
{
    if(a>qub || b<qua)
        return 0;
    if(a>=qua && b<=qub)
    {
        return tree2[node];
    }
    ll res=query(node*2,a,(a+b)/2,qua,qub)+query(node*2+1,(((a+b)/2)+1),b,qua,qub);
    return res;
}
int main()
{
    int t,c;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&n,&q);
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&arr[j]);
            tree1.push_back(0);
            tree2.push_back(0);
        }
        for(j=1;j<=n;j++)
        {
            tree1.push_back(0);
            tree2.push_back(0);
        }
        build_tree(1,1,n);
        printf("Case %d:\n",i);
        for(j=1;j<=q;j++)
        {
            scanf("%d",&c);
            if(c==0)
            {
                scanf("%lld%lld%lld",&st,&nd,&x);
                update0(1,1,n,st,nd,x);
            }
            else if(c==1)
            {
                scanf("%lld%lld%lld",&st,&nd,&x);
                update1(1,1,n,st,nd,x);
            }
            else if(c==2)
            {
                scanf("%lld%lld",&st,&nd);
                printf("%lld\n",query(1,1,n,st,nd));
            }
        }
    }
    return 0;
}
