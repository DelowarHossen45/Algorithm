#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[1000],n,i,j,count=0,tmp;
	cin>>n;
	for(i=0;i<n;i++)
	
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				count++;
			}
		}
	}
	cout<<"Array is sorted in "<<count<<" swaps."<<endl;
	cout<<"First Element: "<<a[0]<<endl;
	cout<<"Last Element: "<<a[n-1]<<endl;
	return 0;
}
