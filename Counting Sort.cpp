#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	long long int a[100009],count[100009]={0},tmp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
