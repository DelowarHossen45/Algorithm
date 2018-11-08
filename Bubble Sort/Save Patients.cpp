#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,max=0,min=0,vic,ste;
	cin>>j;
	for(i=0;i<j;i++)
	{
		cin>>vic>>ste;
		max=max+vic;
		min=min+ste;
	}
	if(max<=min)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
