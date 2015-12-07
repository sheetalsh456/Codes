#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,max,min;
    string s1,s2;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        cin >> s1;
        cin >> s2;
        min=0;
        max=0;
        for (int j=0;j<s1.size();j++)
        {
            if ((s1[j]=='?') || (s2[j]=='?'))
            {
                max+=1;
            }
            else if (s1[j]!=s2[j])
            {
                max+=1;
                min+=1;
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}
