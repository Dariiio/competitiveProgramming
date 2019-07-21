#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define fs first
#define sn second
#define pb push_back
#define inf -1000000

int main()
{

	int n,m,tot = 0,cntx[2000],cnty[2000];
	char c,mm[2000][2000];
	memset(cntx,0,sizeof(cntx));
	memset(cnty,0,sizeof(cnty));
	cin>>n>>m;
	forn(i,n){
		forn(j,m){
			cin>>c;
			if(c=='*'){
				tot++;
				cntx[i]++;
				cnty[j]++;
				mm[i][j] = '*';
			}else mm[i][j] = '.';
		}
	}
	int mxx = *max_element(cntx,cntx+n);
	int mxy = *max_element(cnty,cnty+m);
	
	if(mxx+mxy == tot) cout<<"YES\n";
	else cout<<"NO\n";
	
	
	
	
	

	return 0;
}
