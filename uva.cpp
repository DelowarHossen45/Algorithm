#include<bits/stdc++.h>
using namespace std;
  
  
int knapSack(int W, int wt[], int val[], int n) 
{ 

   int i, w; 
   int K[n+1][W+1]; 
  
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
  
int main() 
{ 
	freopen("Sum.txt","r",stdin);
	freopen("uva1.txt","w",stdout);

    int t,n,price[1000],wt[1000],q,x;
    int  W; 
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>price[i]>>wt[i];
          
        }

        cin>>q;
        int sum=0;
        while(q--)
        {
            cin>>W;
            sum+=knapSack(W, wt, price, n); 
        }
        cout<<sum<<endl;
    }
    
    return 0; 
}  