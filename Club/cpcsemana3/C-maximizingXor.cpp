#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int l,r;
	cin>>l>>r;
	int max=0;
	for(int i=l;i<=r;i++){
		for(int e=i;e<=r;e++){
			if((i^e)>max)
				max=(i^e);
			//cout<<i<<" "<<e<<" "<<max<<endl;
		}
	}
	cout<<max<<"\n";

	
	return 0;
}