#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a1[100000];
ll a2[100000];
ll dp1[500][500];
ll dp2[500][500];
int main()
{
    int maxi,j,i,counter,k,len;
    ll n;
    int diff[100];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a1[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> a2[i];
    }
    for(i=0;i<n;i++)
    {
        dp1[i][i]=a1[i];
        counter=dp1[i][i];
        for(j=i+1;j<n;j++)
        {
            counter+=dp1[i][j];
            dp1[i][j]=counter;
        }
    }
    for(i=0;i<n;i++)
    {
        dp2[i][i]=a2[i];
        counter=dp2[i][i];
        for(j=i+1;j<n;j++)
        {
            counter+=dp2[i][j];
            dp2[i][j]=counter;
        }
    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if (dp1[i][j]>=dp2[i][j])
            {
                diff[k]=abs(i-j)+1;
                k++;
            }
        }
    }
    len=sizeof(diff)/sizeof(diff[0]);
    maxi=diff[0];
    for(i=1;i<len;i++)
    {
        if(diff[i]>maxi)
        {
            maxi=diff[i];
        }
    }
    cout << maxi << endl;
}
