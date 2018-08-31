#include <bits/stdc++.h>
//Chanukah Challenge 
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



int P,N;



int main(){

	int c;

	cin>>P;

	while(P--){

		cin>>c>>N;

		cout << c << " " << ((N*(N+1))/2)+N << "\n";

	}

	

	

	

	return 0;

}
