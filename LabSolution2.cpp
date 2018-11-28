#include <bits/stdc++.h>
using namespace std;
using namespace std;
map <int,int> level;
void bfs(int source, map <int,vector<int> > graph) {
    queue<int> s;
    s.push(source);
    level[source]=0;
    while (s.empty() == false) {
        int top = s.front();
        s.pop();
        int size = graph[top].size();
        for(int i=0;i<size;i++){
            int n =graph[top][i];  
            if(!level.count(n)){ 
                level[n]=level[top]+1; 
                s.push(n);
            }
        }
     }
}

int main(){
    int edge,a,b,cases=1;
    ifstream inFile;
    inFile.open("LabSolution2.txt");
    while(inFile>>edge&& edge){
    	cout<<edge;
             map <int,vector<int> > graph;  
             for(int i=0;i<edge;i++){
             		inFile>>a>>b;
                     //scanf("%d %d",&a,&b);
                     graph[a].push_back(b);
                     graph[b].push_back(a);
             }
             int ttl,source;
             while((inFile>>source>>ttl) && (source!=0 || ttl!=0)){
                map <int,int>::const_iterator itr;
                level.clear();
                bfs(source,graph);
                int finalResult = 0;
                for(itr = level.begin(); itr != level.end(); ++itr){
                    if((*itr).second>ttl)++finalResult;
                }
                finalResult += graph.size()-level.size(); 
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,finalResult,source,ttl); 
                cases++;  
             } 
    }
 return 0;   
}
