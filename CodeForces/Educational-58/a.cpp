#include <bits/stdc++.h>
using namespace std;

int q,l,r,d;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin>>q;
	while(q--){
		cin>>l>>r>>d;

		bool ans=false;
		int x;
		
		for(int i=l-1;i>0;i--){
			if(i%d==0){
				x=i;
				ans=true;
			}
		}
		if(!ans){
			for(int i=r+1;i<100;i++){
				if(i%d==0)
				{
					x=i;
					break;
				}
			}
		}

		cout<<x<<"\n";
		
		
	}
	

	return 0;
}


