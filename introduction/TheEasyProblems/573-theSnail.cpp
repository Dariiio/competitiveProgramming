#include <bits/stdc++.h>

using namespace std;

int main(){
	float h,u,d,f,fa, cont;
	int day;
	while(cin>>h>>u>>d>>f && h){
		cont=0;
		day=0;
		fa=(u*f)/100;
		while(cont<h){
			day++;
			if(u>0)
				cont += u;
			if(cont>h)
				break;
			u -= fa;
			cont -= d;
			if(cont<0)
				break;
		}
		//cout<<u<<" "<<d<<" "<<fa<<" "<<cont<<endl;
		if(cont>h){
			cout<<"success on day "<<day<<endl;
		}else{
			cout<<"failure on day "<<day<<endl;
		}
	}
	
	return 0;
}
