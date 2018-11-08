#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll,Max;
ll c;
 
void Merge(ll arr[],ll l, ll m,ll r)
{
    ll i,j,k,n1,n2;
    n1=m-l+1;
    n2=r-m;
    
    int L[n1],R[n2];
    for( i=0;i<n1;i++) L[i]=arr[l+i];
    for( j=0;j<n2;j++) R[j]=arr[m+j+1];   
 
    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }else{
            c+=abs(L[i]-R[j]);
            arr[k]=R[j];
            j++;
        }
        k++;
    }
 
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
 
}
void mergeSort(ll arr[],ll l,ll r)
{
    if(l<r)
    {
        ll m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}
 
int main()
{
    ll t,n,arr[500009],sum=0;
 
  
        cin>>n;
        c=0;
        for(int j=0;j<2*n;j++)  cin>>arr[j];
 
        mergeSort(arr,0,2*n-1);
       
        for(int j=0;j<2*n;j+=2)  sum+=arr[j];
 
        cout<<sum<<endl;
    
}
