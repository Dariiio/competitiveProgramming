#include<bits/stdc++.h>
using namespace std;

int n,A,B,C;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	while(n--){
		cin>>A>>B>>C;
		bool sol=false;
		int x,y,z;
		for(x=-100;x<=100;x++)
			for(y=-100;y<=100;y++)
				for(z=-100;z<=100;z++)
					if(x!=y && z!=x && z!=y && x+y+z==A && x*y*z==B && x*x+y*y+z*z==C){
						if(!sol)
							cout<<x<<" "<<y<<" "<<z<<"\n";
						sol=true;
					}
		if(!sol)cout<<"No solution.\n";
	}
	return 0;
}