#include <bits/stdc++.h>
using namespace std;
// ACCEPTED

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
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))


struct st{
	int n;
	string s;
};

bool cmp(st x,st y)
{	
	return (x.n > y.n);
}


st pr[3],palos[3];

int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(NULL);
	while(true)
	{	
		forn(i,3){
			cin>>pr[i].n>>pr[i].s;
			palos[i].s = pr[i].s;
			palos[i].n = 0;
			pr[i].n = ((pr[i].n == 10 || pr[i].n == 11 || pr[i].n == 12)?0:pr[i].n);
		}
		if(pr[0].n==-1) break;
		
		sort(pr,pr+3,cmp);
		
		int cont=0;
		forn(i,3){
			cont=0;
			forn(j,3){
				if(pr[j].s == palos[i].s){
					palos[i].n += pr[j].n;
					cont++;
					if(cont==2) {palos[i].n += 20;break;}
				}
			}
		}
		
		sort(palos,palos+3,cmp);
		
		int env = 0;
		if(pr[0].n==7)
			env = 7+6+20;
		else
			env = 7 + pr[0].n+20;
		
		cout<<env-palos[0].n<<"\n";
	}
	
	
	return 0;
}
