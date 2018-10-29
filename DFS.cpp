#include<bits/stdc++.h>
#define MX 1009
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
bool vis[MX];

void bfs(int source)
{
    queue <int> vc;
    int a,b;
    level[source]=0;
    vis[source]=1;

    vc.push(source);
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                level[b]=level[a]+6;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,s;
        cin>>n>>m;

        clear(adj);
        mem(level,0);
        mem(vis,0);

        for(int i=1; i<=m; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        cin>>s;
        bfs(s);

        for(int i=1; i<=n; i++)
        {
            if(s==i) continue;
            if(vis[i]==0) cout<<-1<<" ";
            else cout<<level[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
