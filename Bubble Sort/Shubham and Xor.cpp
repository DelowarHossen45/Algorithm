//Shubham and Xor (hakerRank)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,n,count=0;
	cin>>n;
	long long int arr[n];
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1+i;j<=n;j++)
		{
			if(i<j&&(arr[i]^arr[j])==0)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
