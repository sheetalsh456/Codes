#include<iostream>
using namespace std;
int main()
{
	int t,n,m,d,g,h,j,i,k,a;
	int arr[1000];
	int arr1[1000];
	cin >> t;
	for (i=0;i<t;i++)
	{
		cin >> n;
		cin >> m;
		for (j=0;j<n;j++)
		{
			arr[j]=j+1;
		}
		for (k=0;k<m;k++)
		{
			cin >> a;
			arr[a-1]=-1;
		}
		h=0;
		for (g=0;g<n;g++)
		{
			if (arr[g]!=-1)
			{
				arr1[h]=arr[g];
				h++;
			}
		}
		for (d=0;d<h;d=d+2)
		{
			cout << arr1[d] << " ";
		}
		cout << endl;
    	for (d=1;d<h;d=d+2)
		{
			cout << arr1[d] << " ";
		}
	}
}
