#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num[3],i,j,q,p,r,k,t,sum;
    cin >> t;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout << str;
        memset(num,0,3);
        q=0;

        for(i=0;i<3;i++)
        {
            p=0;
            sum=0;
            for(j=q;str[j]!=' ';j++)
            {
                if(isalpha(str[j]))
                {
                    p++;
                }
            }
            if (!p)
            {
                for(r=j-1,k=0;r>=q;r--,k++)
                {
                    sum+=(((int)(str[r]-'0'))*(10^k));
                }
                num[i]=sum;

            }
            q=j+3;
        }
        if(num[0]==0)
        {
            num[0]=num[2]-num[1];
        }
        if(num[1]==0)
        {
            num[1]=num[2]-num[0];
        }
        if(num[2]==0)
        {
            num[2]=num[0]+num[1];
        }
        cout << num[0] << " + " << num[1] << " = " << num[2] << endl;
    }
    return 0;
}
