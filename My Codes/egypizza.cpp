#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[5],p,i,sum;
    string a;
    cin >> n;
    arr[0]=0;
    arr[1]=0;
    arr[2]=0;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if (!a.compare("1/4"))
        {
            arr[0]++;
        }
        else if (!a.compare("1/2"))
        {
            arr[1]++;
        }
        else if (!a.compare("3/4"))
        {
            arr[2]++;
        }
    }
    sum=arr[2]+(int)(arr[1]/2)+(arr[1]%2)+1;
    if(arr[1]%2==0)
    {
        if (arr[2]<arr[0])
        {
            if ((arr[0]-arr[2])%4==0)
            {
                sum+=((arr[0]-arr[2])/4);
            }
            else
            {
                sum+=(((arr[0]-arr[2])/4)+1);
            }
        }
    }
    else if((arr[1]%2!=0) && (arr[0]>2))
    {
        p=arr[0]-2;
        if(arr[2]<p)
        {
            if (((p-arr[2])%4)==0)
            {
                sum+=((p-arr[2])/4);
            }
            else
            {
                sum+=(((p-arr[2])/4)+1);
            }
        }
    }
    cout << sum;
    return 0;
}
