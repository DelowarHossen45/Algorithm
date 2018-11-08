#include<bits/stdc++.h>
using namespace std;
void merge(long long int arr[], long long int l, long long int m, long long int r) 
{ 
    long long int i, j, k; 
    long long int n1 = m - l + 1; 
    long long int n2 =  r - m; 
    long long int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0;  
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(long long int arr[], long long int l, long long int r) 
{ 
    if (l < r) 
    {  
        int m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
void printArray(long long int A[], long long int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    long long int test,t,n,m,i;
    cin>>test;
    for(t=1;t<=test;t++)
    {
    	cin>>n>>m;
    	long long int a[n+m+1];
    	for(i=0;i<n+m;i++)
    	{
    		cin>>a[i];	
	}
	mergeSort(a, 0, n+m-1);
	for(int j=0;j<n+m;j++)
	{
		cout<<a[n+m-1-j]<<" ";
	}
	cout<<endl;
	}
    return 0; 
} 
