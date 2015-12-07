#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>vec;
	int t,n,m,r,i,j,q,y,l,g,f;
    int k;
	int arr[1000];
	cin >> t;
	for (i=0;i<t;i++)
	{
		cin >> n;
		cin >> m;
		
		for (l=1;l<=n;l++)
		{
		    vec.push_back(l);	
		}
		for (j=0;j<m;j++)
		{
			cin >> arr[j];
		}
		sort(arr,arr+m);
		for (r=m-1;r>=0;r--)
		{
			vec.erase(vec.begin()+(arr[r]-1));
	    }
		
	    for (q=0;q<vec.size();q=q+2)
		{
			cout << vec[q] << " ";
		}
		cout << endl;
		for (y=1;y<vec.size();y=y+2)
		{
			cout << vec[y] << " ";
		} 
	    vec.clear();
		
		
	}

return 0;
}
