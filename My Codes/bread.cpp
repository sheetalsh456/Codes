#define ll long long
#include<bits/stdc++.h>
ll t,i,n,k,sum,rem,p;
ll a[100005];
using namespace std;
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sum=0;
        rem=0;
        p=0;
        for(i=0;i<n;i++)
        {

           rem+=(a[i]%k);
           if ((i==n-1) && ((rem%k)!=0))
            {
                sum+=1;
                p=1;
            }
           sum+=((rem/k)+(a[i]/k));
           rem=rem%k;
            if ((rem%k==0)&&(rem!=0))
            {
                sum+=(rem/k);
                rem=0;
            }
            else if (rem!=0)
            {
                rem+=1;
                if((rem%k==0) && (p!=1))
                {
                    sum+=(rem/k);
                    rem=0;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
