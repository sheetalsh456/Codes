#define ll long long
#include<bits/stdc++.h>
using namespace std;
list<ll>mylist1;
list<ll>mylist2;
ll t,i,g,m,a,b;
int main()
{

    cin >> t;

    while(t--)
    {
        cout << endl;
        cin >> g >> m;
        if ((g==0) && (m==0))
        {
            cout << "uncertain" << endl;
        }
        else
        {
            for(i=0;i<g;i++)
        {

            cin >> a;
            mylist1.push_back(a);
        }
        for(i=0;i<m;i++)
        {

            cin >> b;
            mylist2.push_back(b);
        }
        mylist1.sort();
        mylist2.sort();

        while ((!mylist1.empty()) && (!mylist2.empty()))
               {
                   if (mylist1.front()<mylist2.front())
                    {
                        mylist1.pop_front();
                    }
                    else if(mylist2.front()<=mylist1.front())
                    {
                        mylist2.pop_front();
                    }

               }
               if ((mylist1.empty()) && (!mylist2.empty()))
               {
                   cout << "MechaGodzilla" << endl;
               }
               else if ((mylist2.empty()) && (!mylist1.empty()))
               {
                   cout << "Godzilla" << endl;
               }
               else
               {
                   cout << "uncertain" << endl;
               }

        }
        mylist1.clear();
        mylist2.clear();


    }
    return 0;
}
