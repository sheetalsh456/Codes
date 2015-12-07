#define ll long long
#include<bits/stdc++.h>
using namespace std;
set<int>s;
pair<int,int>*p;
int i,k,j,maxi,ele,cnt,cnt1,cnt2,g,mini,cnt1f,cnt2f,n;
ll a[100003];
int main()
{
    p=new pair<int,int>[10001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s.insert(a[i]);
    }
    i=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if((*it)==a[j])
            {
               cnt++;
            }
        }
        p[i]=make_pair((*it),cnt);
        i++;
    }
    maxi=0;
    i=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        if (p[i].second>maxi)
        {
            maxi=p[i].second;
            ele=p[i].first;
        }
        i++;
    }
    g=0;
    mini=100003;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
    if (maxi==p[g].second)
    {
    ele=p[g].first;
    k=0;
    for(i=0;i<n;i++)
    {
        if(k==0 && a[i]==ele)
        {
            cnt1=i+1;
            k++;
        }
        else if(k==maxi-1 && a[i]==ele)
        {
            cnt2=i+1;
            break;
        }
        else if(a[i]==ele)
        {
            k++;
        }
    }
    if ((cnt2-cnt1)<mini)
    {
        cnt2f=cnt2;
        cnt1f=cnt1;
    }
    mini=min(mini,cnt2-cnt1);
    }
    g++;
    }
    printf("%d %d",cnt1f,cnt2f);
    return 0;

}
