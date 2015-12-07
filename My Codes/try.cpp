#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector< vector< int > >vec(10000,vector<int>(100000,0));
int main()
{
    int n,q,a,b,ch,counter;
    string str;
    cin >> n >> q;
    ch=n;
    vec.clear();
    for (int j=0;j<q;j++)
    {
        cin >> str >> a >> b;
        if (str[0]=='U')
        {
            if ((a<=n) && (b<=n))
            {
                vec[ch].push_back(a);
                vec[ch].push_back(b);
            }
            else if (a>n && b<=n)
            {
                vec[a-1].push_back(b);
                for (vector<int>::iterator v=vec[a-1].begin();v!=vec[a-1].end();v++)
                {
                    vec[ch].push_back(*v);
                }
            }
            else if (b>n && a<=n)
            {
                vec[b-1].push_back(a);
                for (vector<int>::iterator v=vec[b-1].begin();v!=vec[b-1].end();v++)
                {
                    vec[ch].push_back(*v);
                }
            }
            else if (a>n && b>n)
            {
                for (vector<int>::iterator v=vec[a-1].begin();v!=vec[a-1].end();v++)
                {
                    vec[ch].push_back(*v);
                }
                for (vector<int>::iterator v=vec[b-1].begin();v!=vec[b-1].end();v++)
                {
                    vec[ch].push_back(*v);
                }
            }
            ch++;
        }
        else if (str[0]=='G')
        {
            if (a<=n)
            {
                cout << a << endl;
            }
            else
            {
                for (counter=0;counter<b-1;counter++);
                cout << vec[a-1][counter] << endl;
            }
        }
    }
    return 0;
}


