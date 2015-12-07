#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t,sum,j;
    vector<int>vec;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int n,mu;
        cin >> n >> mu;
        if (mu>=20)
        {
            vec.push_back(0);
        }
        else if ((n==0) && (mu==0))
        {
            vec.push_back(1);
        }
        else if ((n==0) && (mu>0))
        {
            vec.push_back(0);
        }
        else if ((mu==1) && (n>=1))
        {
            vec.push_back(1);
        }
        else if (mu>1)
        {
            sum=0;
            for (j=2;j<=mu;j++)
            {
                sum+=(3*pow(2,j-2));
            }
            if (n>=(sum+1))
            {
                vec.push_back(1);
            }
            else
            {
                vec.push_back(0);
            }
        }
    }
    for (int i=0;i<vec.size();i++)
    {
        if (vec[i]==1)
        cout << "Yes" << endl;
        if (vec[i]==0)
        cout << "No" << endl;
    }
    return 0;
}
