#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name[]={"Apple","Jahid","Ahad","Mozid"};
	string tmp;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(name[i]<name[j])
			{
				tmp=name[i];
				name[i]=name[j];
				name[j]=tmp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		cout<<name[i]<<" ";
	}
}
