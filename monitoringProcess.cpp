#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("M_input.txt","r",stdin);
	freopen("M_output.txt","w",stdout);
    int t,m=1;
    vector<int>start,finish;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        start.push_back(x);
        finish.push_back(y);
    }
    sort(start.begin(),start.end());
    sort(finish.begin(),finish.end());
    int i=0,j=0,c=0;
    while(i<start.size())
    {
          // cout<<i<<start.size()<<endl;
        while(start[i]<=finish[j])
        {
              // cout<<start[i]<<" "<<finish[j]<<endl;
            c++;
            i++;
              if(i>=start.size())break;
 
        }
        i++;
        j++;
    }
    cout<<"Case "<<m<<": "<<c<<endl;
    m++;
    start.clear();
    finish.clear();
 
    }
    return 0;
 
}
