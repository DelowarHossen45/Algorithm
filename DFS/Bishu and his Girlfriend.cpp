#include<bits/stdc++.h>
using namespace std;
#define sz 1009
#define MS(array,value) memset(array,value,sizeof(array))
vector<int>adj[sz];
vector<pair<int,int> > Pair;
int visited[sz],level[sz];
 
 
void dfs(int source)
{
 
        for(int i=0;i<adj[source].size();i++)
        {
            if(!visited[adj[source][i]]) 
            {
                visited[adj[source][i]]=1;
                level[adj[source][i]]=level[source]+1;
                dfs(adj[source][i]);
            }
        }
    
 
}
 
int main()
{
    int n,u,v,q,arr[sz];
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    MS(visited,0);
    MS(level,0);
    visited[1]=1;
    level[1]=0;
    dfs(1);
    for(int i=1;i<=n;i++) if(!visited[i]) level[i]=99999;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>arr[i];
        Pair.push_back(make_pair(level[arr[i]],arr[i]));
    }
 
    sort(Pair.begin(),Pair.end());
 
    cout<<Pair[0].second<<endl;
 
    for(int i=0;i<=n+5;i++) {adj[i].clear();}
}
