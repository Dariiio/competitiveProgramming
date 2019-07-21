#include <bits/stdc++.h>
// https://codeforces.com/contest/1183/problem/C

//ACCEPTED DIFICIL Y PARA DIBUJAR Y PENSAR MUCHO
using namespace std;

int main()
{
	long long q,k,n,a,b,ans;
	// era con long long, por las cotas y la multiplicacion
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>q;
	while(q--){
		ans=0;
		cin>>k>>n>>a>>b;
		k--;
		if(k/b < n) ans = -1;
		else{
			// le restas -1 para que no te tome el turno en donde se te acaba la bateria 
			k -= n*b; // restas todos tus turnos b, osea terminas el juego
			a -= b; // esto representa la bateria que -ganas- si reemplazas un b turno por un turno a
			ans = min(k/a,n);
			// dividis lo que te queda de bateria en la -ganancia-, esto te tira en otras palabras 
			//los a turnos que podes agregar sin que se te cage la batería
			// fijate que si agregas mas de n turnos a, no tiene sentido
		}
		
		cout<<ans<<"\n";
	}

	
	return 0;
}
