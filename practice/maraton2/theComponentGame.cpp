#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)

int P,N,M,K,nw,nb,nnr;
int g[1100][1100];
int gcopy[1100][1100];
int dr[]={1,-1,0,0};
int dc[]={0,0,1,-1};
string s;

void floodfill(int r, int c, int c1, int c2){
	if(r<0||c<0||r>=N||c>=M)return;
	if(g[r][c]!=c1)return;
	g[r][c]=c2;
	forn(d,4)
		floodfill(r+dr[d],c+dc[d],c1,c2);	
}
void floodg(){
	nw=nb=nnr=0;
	forn(i,N){
		forn(j,M){
			if(g[i][j]==0){
				nnr++;
				nw++;
				floodfill(i,j,0,9);
			}
			else if(g[i][j]==1){
				nnr++;
				nb++;
				floodfill(i,j,1,9);
			}
		}
	}
}

int main(){
	//freopen("entrada.txt","r",stdin);
	cin>>P;
	while(P--){
		cin>>K>>N>>M;
		forn(i,N){
			cin>>s;
			forn(j,M){
				gcopy[i][j]=s[j]-'0';
			}
		}
		int w=0,b=0,nr=0;
		forn(i,M){
			forn(k,N)forn(l,M)g[k][l]=gcopy[k][l];
			forn(j,N){
				g[j][i]=1;
			}
			floodg();
			if(nnr>nr){
				nr=nnr;
				w=nw;b=nb;
			}
			else if(nnr==nr){
				if(nw>w){
					w=nw;b=nb;
				}
			}
		}
		cout << K << " " << w << " " << b << "\n";		
	}	
	return 0;
}

