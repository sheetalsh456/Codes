#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>vec;
	int t,n,m,r,i,j,q,y,l;
//	int d,e,u,h;
    int k;
	int arr[1000];
	cin >> t;
	for (i=0;i<t;i++)
	{
		cin >> n;
		cin >> m;
		cout << "n=" << n << endl;
		cout << "m=" << m << endl;
		
		for (l=1;l<=n;l++)
		{
		    vec.push_back(l);	
		}
	/*	cout << "vec" <<endl;
		for (u=0;u<n;u++)
		{
			cout << vec[u] << endl;
		} */
		for (j=0;j<m;j++)
		{
			cin >> arr[j];
		}
	/*	cout <<"unsorted array" << endl;
		for (e=0;e<m;e++)
		{
			cout << arr[e] << endl;
		} */
		sort(arr,arr+m);
	/*	cout << "sorted array" << endl;
	    for (d=0;d<m;d++)
		{
			cout << arr[d] << endl;
		} */
		for (r=m-1;r>=0;r--)
		{
			vec.erase(vec.begin()+(arr[r]-1));
		}
	/*	cout << "vec after erasing" << endl;
		for (h=0;h<vec.size();h++)
		{
			cout << vec[h] << endl;
		} */
		
	    for (q=0;q<vec.size();q=q+2)
		{
			cout << vec[q] << " ";
		}
		cout << endl;
		for (y=1;y<vec.size();y=y+2)
		{
			cout << vec[y] << " ";
		} 
	   for (k=0;k<vec.size();k++)
		{
		    vec.pop_back();	
		}
		
		
	}

return 0;
}
