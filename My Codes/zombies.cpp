#define ll long long
#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
ll arr[1001];
int main()
{
    int n,i,sum1;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    sum1=0;
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            vec.push_back(arr[i]);
            sum1+=arr[i];
        }
    }
    vec.push_back(sum1);
    sum1=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            vec.push_back(arr[i]);
            sum1+=arr[i];
        }
    }
    vec.push_back(sum1);
    for(i=0;i<vec.size();i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
