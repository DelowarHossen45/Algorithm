#include <bits/stdc++.h>
using namespace std;
using namespace std;
map <int,int> visited;
void bfs(int source, map <int,vector<int> > graph) {

    queue<int> s;

    s.push(source);

    visited[source]=0;

    while (s.empty() == false) {

        int top = s.front();

        s.pop();

        int size = graph[top].size();

        for(int i=0;i<size;i++){

            int n =graph[top][i];  

            if(!visited.count(n)){ 

                visited[n]=visited[top]+1; 

                s.push(n);

            }
        }

     }
}
int main(){

    int nods,a,b,cases=1;

    while(scanf("%d",&nods) && nods){

             map <int,vector<int> > graph;  

             for(int i=0;i<nods;i++){

                     scanf("%d %d",&a,&b);

                     graph[a].push_back(b);

                     graph[b].push_back(a);

             }
             int ttl,source;

             while(scanf("%d %d",&source,&ttl) && (source!=0 || ttl!=0)){

                map <int,int>::const_iterator itr;

                visited.clear();

                bfs(source,graph);

                int result = 0;

                 for(itr = visited.begin(); itr != visited.end(); ++itr){

                    if((*itr).second>ttl)++result;

                 }

                 result += graph.size()-visited.size(); 

                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,result,source,ttl); 

                cases++;  

             }
    }
 return 0;   
}
             

