#include <bits/stdc++.h>
using namespace std;

vector<int> add[100];
int visit[100];
int lebel[100];
void bfs(int s){
queue<int> q;
q.push(s);
visit[s] = 1;
lebel[s] = 0;
while(!q.empty()){
int v = q.front();
q.pop();
for(int i=0;i<add[v].size();i++){
if(visit[add[v][i]]==0){
visit[add[v][i]] = 1;
lebel[add[v][i]] = lebel[v] + 1;
q.push(add[v][i]);
}
}
} 
}

int main(){
freopen("input2.txt","r",stdin);
freopen("output2.txt","w",stdout);
int cases = 1;
while(true){
int edges;
cin>>edges;
if(edges == 0) break;

for(int i=0;i<edges;i++){
int x,y;
cin>>x>>y;
add[x].push_back(y);
add[y].push_back(x);
}
while(true){
int src,ttl,counts = 0;
cin>>src>>ttl;
if(src == 0 && ttl == 0) break;
memset(visit,0,sizeof(visit));
memset(lebel,0,sizeof(lebel));
bfs(src);
for(int i=0;i<100;i++){
if(lebel[i]>ttl){
//cout<<i<<" "<<lebel[i]<<" ";
counts++;
}
//cout<<endl;
}
cout<<"Case "<<cases++<<": "<<counts<<" nodes not reachable from node "<<src<<" with "<<ttl<<" TTL = "<<ttl<<endl;
}
for(int i=0;i<100;i++){
add[i].clear();
}
}
return 0;
}
