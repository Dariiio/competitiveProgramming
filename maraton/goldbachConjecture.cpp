#include <bits/stdc++.h>
//Goldbach's Conjecture
using namespace std;

#define dprint(v) cerr << #v"=" << v << endl //;)

#define forr(i,a,b) for(int i=(a); i<(b); i++)

#define forn(i,n) forr(i,0,n)

#define forall(it,v) for(typeof(v.begin()) it=v.begin();it!=v.end();++it)

#define sz(c) ((int)c.size())

#define zero(v) memset(v, 0, sizeof(v))

typedef long long ll;

typedef pair<int,int> ii;



#define MAXP 33000	//no necesariamente primo

int criba[MAXP+1];

void crearcriba(){

	int w[] = {4,2,4,2,4,6,2,6};

	for(int p=25;p<=MAXP;p+=10) criba[p]=5;

	for(int p=9;p<=MAXP;p+=6) criba[p]=3; 

	for(int p=4;p<=MAXP;p+=2) criba[p]=2;

	for(int p=7,cur=0;p*p<=MAXP;p+=w[cur++&7]) if (!criba[p]) 

		for(int j=p*p;j<=MAXP;j+=(p<<1)) if(!criba[j]) criba[j]=p;

}

vector<int> primos,izq,der;

int n,x;

void buscarprimos(){

	crearcriba();

	forr (i,2,MAXP+1) if (!criba[i]) primos.push_back(i);

}



int main(){

	

	buscarprimos();

	//for(int i=0;i<10;i++) cout << primos[i] << " ";

	//cout << primos.size() << endl;

	

	cin>>n;

	

	while(n--){

		cin>>x;

		int hasta=lower_bound(primos.begin(),primos.end(),x)-primos.begin();

		

		for(int i=hasta;i>=0;i--){

			auto esta=binary_search(primos.begin(),primos.end(),x-primos[i]);

			//cout << primos[i] << " " << x-primos[i] << endl;

				if(primos[i]+(x-primos[i])==x && esta){

					if(primos[i]<x-primos[i])break;

					izq.push_back(primos[i]);

					der.push_back(x-primos[i]);				

				}			

		}

		cout << x << " has " << izq.size() << " representation(s)\n";

		forn(i,izq.size()) cout << der[i] << "+" << izq[i] << "\n";

		izq.clear();der.clear();

		if(n)cout << "\n";

	}

	return 0;

}

