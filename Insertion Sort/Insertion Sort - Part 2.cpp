#include<iostream>
#include<cmath>

using namespace std;

long long a[1000];

int main()
{
    long long i,j,n,temp,digit,t,l;
                cin>>n;
                for(i=0; i<n; i++)
                {
                    cin>>a[i];
                }
                
                for(i=0; i<n; i++)
                {
                    for(j=0;j<i;j++)
                    {
                        if(a[i]<a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                    for(int t=0;t<n&&i>0;t++)
                    {
                        cout<<a[t]<<" ";
                    }
                    if(i>0)
                    {
                        cout<<endl;
                    }
                }
    return 0;

}
