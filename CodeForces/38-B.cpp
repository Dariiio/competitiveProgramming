#include <bits/stdc++.h>
using namespace std;

const int DIM=8;
bool m[DIM][DIM];
void t(int x,int y,bool m[DIM][DIM]){
	for(int i=0; i<DIM;i++){
		m[x][i]=false;
		m[i][y]=false;
		/*for (int j=0;j<DIM;++j)
		{
			m[j][y]=false;
		}*/
	}
}
void mostrarM(bool m[DIM][DIM]){
	cout<<endl;
	for(int i=0; i<DIM;i++){
		for (int j=0;j<DIM;++j)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool isInM(int x, int a){
	if(x+a>7 || x+a<0) return false;
}
void c(int x,int y,bool m[DIM][DIM]){
	m[x][y]=false;
	if(isInM(x,2) && isInM(y,1)) m[x+2][y+1]=false;
	if(isInM(x,-2) && isInM(y,-1)) m[x-2][y-1]=false;
	if(isInM(x,2) && isInM(y,-1)) m[x+2][y-1]=false;
	if(isInM(x,-2) && isInM(y,1)) m[x-2][y+1]=false;

	if(isInM(x,1) && isInM(y,2)) m[x+1][y+2]=false;
	if(isInM(x,-1) && isInM(y,-2)) m[x-1][y-2]=false;
	if(isInM(x,1) && isInM(y,-2)) m[x+1][y-2]=false;
	if(isInM(x,-1) && isInM(y,2)) m[x-1][y+2]=false;
}
int contTrue(bool m[DIM][DIM]){
	int cont=0;
	for(int i=0; i<DIM;i++){
		for (int j=0;j<DIM;++j)
		{
			if(m[i][j]) cont++;
		}
	}
	return cont;
}
int convert(char a){
	if(a == 'a') return 0;
	if(a == 'b') return 1;
	if(a == 'c') return 2;
	if(a == 'd') return 3;
	if(a == 'e') return 4;
	if(a == 'f') return 5;
	if(a == 'g') return 6;
	if(a == 'h') return 7;

	if(a == '1') return 0;
	if(a == '2') return 1;
	if(a == '3') return 2;
	if(a == '4') return 3;
	if(a == '5') return 4;
	if(a == '6') return 5;
	if(a == '7') return 6;
	if(a == '8') return 7;
}
int main(){
	for(int i=0; i<DIM;i++){
		for (int j=0;j<DIM;++j)
		{
			m[i][j]=true;
		}
	}
	string x;
		cin>>x;
		t(convert(x[0]),convert(x[1]),m);
		c(convert(x[0]),convert(x[1]),m);
		cin>>x;
		c(convert(x[0]),convert(x[1]),m);
		mostrarM(m);
		cout<<contTrue(m)<<endl;
	return 0;
}