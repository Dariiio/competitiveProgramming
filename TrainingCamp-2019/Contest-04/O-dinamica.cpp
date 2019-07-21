#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
using namespace std;

typedef pair<int,int> ii;
#define fs first
#define sn second

const int N = 8;
int di[8] = {-2,-2,2,2,1,1,-1,-1};
int dj[8] = {-1,1,-1,1,2,-2,2,-2};
int dp[N][N];
int used[N][N];
queue<ii> q;
int x,y;

int f(char c){
	if(c=='a') return 0;
	if(c=='b') return 1;
	if(c=='c') return 2;
	if(c=='d') return 3;
	if(c=='e') return 4;
	if(c=='f') return 5;
	if(c=='g')return 6;
	if(c=='h') return 7;
	return 0;
}

/*
void f(int i,int j,int mov)
{
	if(i>=8 || j>=8 || i<0 || j<0) return;
	if(i==x && j==y) min(dp[i][j],mov);
	if(dp[i][j]!=-1) min(mov,dp[i][j]);
	else{
		dp[i][j] = mov;
		forn(k,8)
			f(i+di[k],j+dj[k],mov+1);
		
	}
	dp[i][j] = min(mov,dp[i][j]);
}*/

int main()
{
	memset(dp,-1,sizeof(dp));
	memset(used,0,sizeof(used));
	
	string s1,s2;
	int a,b;
	while(cin>>s1>>s2){
		//cout<<s[0]<<" "<<s[1];
		a = f(s1[0]), b=s1[1]-'0'-1;
		x = f(s2[0]); y = s2[1]-'0'-1;
		//cout<<"\n"<<x<<" "<<y;
		//cout<<"\n"<<a<<" "<<b;
	
		dp[a][b] = 0;
		used[a][b] = 1;
		q.push({a,b});
		
		while(!q.empty()){
			ii v = q.front();
			q.pop();
			forn(k,8){			
				int ux =v.fs+di[k]  ,uy =v.sn+dj[k] ;
				if(ux>=8 || uy>=8 || ux<0 || uy<0) continue;
				if(!used [ ux ] [ uy ] ){
					used[ux][uy] = 1;
					q.push({ux,uy});
					dp[ux][uy] = dp[v.fs][v.sn]+1;
				}
			}
		}
		cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dp[x][y]<<" knight moves."<<"\n";
		
		/*
		forn(i,8){
			forn(j,8){
				if(dp[i][j]/10) cout<<dp[i][j]<<" ";
				else cout<<dp[i][j]<<"  ";
			};
		cout<<"\n";
		}
		
		*/

		memset(dp,-1,sizeof(dp));
		memset(used,0,sizeof(used));
	
	}
	
	//cout<<f(0,7,0)<<"\n";	
	//f(0,7,0);
	//cout<<dp[x][y]<<"\n";
	//dp[0][7] = 9;
	//dp[0][3] = 8;
	
	
	return 0;
}
