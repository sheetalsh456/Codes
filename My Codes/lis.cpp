#include<iostream>
using namespace std;
int main()
{
	int max,s[11],arr[11],j;
	for (int i=0;i<10;i++)
	{
		cin >> arr[i];
	}
	for (int i=1;i<=10;i++)
	{
		j=0;
		while (j<i)
		{
			if (arr[j]<=arr[i-1])
			{
					s[i]=s[j]+1;
			}
		
		}
	}
	max=s[1];
	for (int k=2;k<=10;k++)
	{
		if (s[k]>max)
		{
			max=s[k];
		}
	}
	cout << max;
	return 0;
}
