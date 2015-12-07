#define ll long long
#include<bits/stdc++.h>
using namespace std;
vector<ll>vec;
ll i,num,a,b,c;
int main()
{
    int a,b,c;
    string str;
    cin >> str;
    while(str.compare("00e0")!=0)
    {
        a=str[0]-'0';
        b=str[1]-'0';
        c=str[3]-'0';
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
        num=(b+(a*10))*pow(10,c);
        cout << "num=" << num << endl;
        for(i=1;i<=num;i++)
        {
            vec.push_back(i);
        }
        i=1;
        while(vec.size()!=1)
        {
            vec.erase(vec.begin()+i);
            if (i==(vec.size()-1))
            {
                i=0;
            }
            else if (i==(vec.size()))
            {
                i=1;
            }
            else
            {
                i++;
            }
        }

        cout << vec[0] << endl;
        vec.clear();
        cin >> str;
    }
    return 0;
}
