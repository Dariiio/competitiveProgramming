//Div2-383 742B
#include<bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)

long long x,i,n,d=0,a,b[1000009];
int main(){
	ios::sync_with_stdio(0);cin.tie(NULL);
   cin>>n>>x;
   forn(i,n){
     cin>>a;
     d+=b[a^x];
     b[a]++;
   }
   cout<<d;
   
}
