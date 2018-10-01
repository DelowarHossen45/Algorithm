#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,a[1000],pos[1000],n,tmp;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		pos[a[i]]=i;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;	
			}	
		}	
	}
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			cout<<pos[a[i]]<<" ";
		}
		else
		{
			cout<<pos[a[i]]<<endl;
		}
	}
	return 0;
}
