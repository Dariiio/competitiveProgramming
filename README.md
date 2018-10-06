# Competitive Programming
## Template para programación competitiva
```cpp
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
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	
	return 0;
}
```
## [Estructura de Datos](Otros/dataStructures.md)
## Recordatorio de cosas que siempre olvido...
* Como sumar o restar N desde un índice en un arreglo sin salir de memoria:
```cpp
for(int i=0;i<n;i++)
  if(i==posQueQuiero)
    i=(i+array.size()+-N)%array.size();
```
* Obtener la posición del min/max_element() en un arreglo o vector:
```cpp
int v[n]={...}
int pos_max=max_element(v,v+n)-v;
//si es un vector
int pos_max=max_element(v.begin(),v.end())-v.begin();
```
* No agregar elementos repetidos en un set o algo:
```cpp
vector<int> v;
cin>>a;
if(!v.count(a))
  v.insert(a);
```
* Obtener dígitos de un número:
```cpp
while(num){
  int dig=num%10;
  num=num/10;
}
```
* Calcular 2^n:
```cpp
int res = 1<<n;
```
