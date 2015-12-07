#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26];
    int i,max;
    char ans;
    memset(arr,0,26);
    string str;
    cin >> str;
    for(i=0;i<str.size();i++)
    {
        arr[str[i]-'a']++;
    }
    max=0;
    for(i=0;i<26;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<26;i++)
    {
        if (arr[i]==max)
        {
            ans=(char)(97+i);
            break;
        }
    }
    cout << ans;
}
