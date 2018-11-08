#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,prime[1000],i,j,c=0,p=0,l;
	int t;
	cin>>t;
	for(l=0;l<t;l++)
	{
			cin>>m>>n;
			for(i=2;i<1000000;i++)
			{
				for(j=2;j<=sqrt(i);j++)
				{
					if(i%j==0)
					{
						c=1;
						break;
					}
				}
				if(c!=1)
				{
					prime[p++]=i;
				}
				c=0;
			}
			for(i=0;i<p;i++)
			{
				if(prime[i]>=m&&prime[i]<=n)
				{
					cout<<prime[i]<<endl;
				}
				if(prime[i]>n)
				{
					break;
				}
			}
	}
	return 0;
}
