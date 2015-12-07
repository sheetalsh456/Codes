#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll n,m,ans1,i,j,arr[100003],queryans[1003],c1,xor1[100003];
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
ll query(ll node,ll a,ll b,ll qua,ll qub,ll c,ll ans)
{
    if(a>qub || b<qua)
        return ans;
    if(a>=qua && b<=qub)
    {
        if (tree[node]==c)
           ans++;
    }
    query(node*2,a,(a+b)/2,qua,qub,c,ans);
    query(node*2+1,(((a+b)/2)+1),b,qua,qub,c,ans);
    return ans;
}
int main()
{
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        xor1[i]=arr[i]^arr[i];
        tree.push_back(0);
    }
    for(i=1;i<=n;i++)
    {
        tree.push_back(0);
    }
    build_tree(1,1,n);
    for(i=1;i<=m;i++)
    {
        ans1=0;
        scanf("%lld",&c1);
        for(j=1;j<=n;j++)
        {
            if(xor1[j]==c1)
                ans1++;
        }
        queryans[i]=query(1,1,n,1,n,c1,ans1);
        printf("%lld\n",queryans[i]);
    }
    for(i=1;i<=m;i++)
    {
        printf("%lld\n",queryans[i]);
    }
    return 0;
}

