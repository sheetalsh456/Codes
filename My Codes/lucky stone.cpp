#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll num,cnt,power,ans,i,n,a[100003];
double cnt5,cnt2;
int main()
{
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        num=a[i];
        cnt5=0.0;
        while(num%5==0)
        {
            num/=5;
            cnt5++;
        }
        cnt2=0.0;
        num=a[i];
        while(num%2==0)
        {
            num/=2;
            cnt2++;
        }
        cnt=0;
        if(cnt5>cnt2)
        {
        cnt=ceil((double)((cnt5-cnt2)/2));
        }
        power=pow(4,cnt);
        ans=a[i]*power;
        cout << ans << endl;
    }

    return 0;
}
