#include<iostream>
#include<cmath>

using namespace std;

long long A[1000];

int main()
{
	long long i,j,n,temp,digit,t,l;
				cin>>n;
				for(i=0; i<n; i++)
				{
					cin>>A[i];
				}
				
     for(  i = 0 ;i < n ; i++ ) {
      int temp = A[ i ];    
      int j = i;
          while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];   
                j= j - 1;

           }
           A[ j ] = temp;       
     }
     for(i=0;i<n;i++)
     {
     		if(i!=n-1)
     		{
     			cout<<A[i]<<" ";
		}
		else
		{
			cout<<A[i]<<endl;
		}
	} 
	return 0;

}
