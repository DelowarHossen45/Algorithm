#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream increasing("increasingOrder.txt");
	ofstream decreasing("decreasingOrder.txt");
	ifstream input("input.txt");
	int i,j,number,tmp,array[200];
	for(i=0;i<100;i++)
	{
		input>>number;
		array[i]=number;
	}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			if(array[i]<array[j])
			{
				tmp=array[i];
				array[i]=array[j];
				array[j]=tmp;
			}
		}
	}
	for(i=0;i<100;i++)
	{
		increasing<<array[i]<<endl;
		decreasing<<array[99-i]<<endl;
	}
	return 0;
}
