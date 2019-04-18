#include <bits/stdc++.h>
// https://uva.onlinejudge.org/external/106/10653.pdf
// bfs en grafo implicito Halim
// ACCEPTED
using namespace std;

//int sx,sy,dx,dy;
int mp[1010][1010];
pair<int,int> s,dest;
int d[1010][1010];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};


int main(){

	
	int r,c,n;
	while(cin>>r>>c){
		if(r==0 && c==0) break;

		memset(mp,0,sizeof(mp));

		cin>>n;
		while(n--)
		{
			int nr,b;
			cin>>nr>>b;
			while(b--){
				int y;cin>>y;
				mp[nr][y] = 1;
			}
		}
		cin>>s.first>>s.second>>dest.first>>dest.second;


		//BFS SSSP
		memset(d,-1,sizeof(d));
		d[s.first][s.second] = 0;
		queue<pair<int,int>> q; q.push(s);
		while(!q.empty()){
			pair<int,int> u = q.front(); q.pop();

			//cout<<"u = "<<u.first<<","<<u.second<<" ";

			
			for(int i=0;i<4;i++){
				
				pair<int,int> v = {u.first+dx[i],u.second+dy[i]};
				
				if(d[v.first][v.second] == -1 && mp[v.first][v.second] != 1
					&& (v.first >= 0 && v.second >= 0 && v.first < r && v.second < c))
				{
					d[v.first][v.second] = d[u.first][u.second]+1;
					q.push(v);
				}
				
			}
		}

		cout<<d[dest.first][dest.second]<<"\n";
		
		
		//DEBUG
		/*
		cout<<"\n DEBUG \n";
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<mp[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"s = "<<s.first<<","<<s.second<<"\n";
		cout<<"dest = "<<dest.first<<","<<dest.second<<"\n";
		*/
		
	}

	
	return 0;
}
/*
3 3
3
0 1 2
1 1 2
2 1 0
0 0
2 2
0 0

->4



10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9
0 0

->18



*/
