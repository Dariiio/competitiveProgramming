#include <iostream>
#include <vector>
using namespace std;
 
int n;
vector<bool> visit;
vector<int>  graph[10000];
vector<int> dist;
 
void dfs(int node){
        visit[node] = true;
        for(int i=0;i<graph[node].size();i++){
            int current = graph[node][i];
            if(!visit[current]){
                dist[current] = dist[node] + 1;
                dfs(current);
            }
        }
}
 
int main(){
        int answer = 0;
        cin>>n;
        visit.resize(n,false);
        dist.resize(n);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            a--;b--;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        dist[0] = 0;
        dfs(0);
        int cand = 0;
        for(int i=0;i<dist.size();i++) if(dist[i] > dist[cand]) cand = i;
        visit.clear();
        visit.resize(n,false);
        dist[cand] = 0;
        dfs(cand);
        for(int i=0;i<dist.size();i++) answer = max(answer,dist[i]);
        cout<<answer<<endl;
}