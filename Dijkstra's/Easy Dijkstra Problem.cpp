#include<bits/stdc++.h>
#define MX 10005
#define INF INT_MAX
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int>MinCost;

int dijkstra(int source, int stop)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    MinCost[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i].first; //node
            int cost = adj[u][i].second; //cost

            if(MinCost[v] >MinCost[u]+cost)
            {
                MinCost[v] =MinCost[u]+cost;
                Q.push({MinCost[v],v});
            }
        }
    }

    if(MinCost[stop]==INF) return -1;
    else return MinCost[stop];
}

int main()
{
    int t,ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int node, edge;
        scanf("%d %d", &node, &edge);
        Clear(adj);

        for(int i=1; i<=edge; i++)
        {
            int u, v, cost;
            scanf("%d %d %d", &u, &v, &cost);
            adj[u].push_back({v,cost});
        }

        int source, ends;
        scanf("%d %d", &source, &ends);

        MinCost.assign(node+1,INF); 
        int check = dijkstra(source,ends);

        if(check != -1) printf("%d\n", check);
        else printf("NO\n");
    }
    return 0;
}
