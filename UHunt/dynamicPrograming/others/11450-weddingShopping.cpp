#include<bits/stdc++.h>
using namespace std;

int n,m,c,k,glist[20][20];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	while(n--){
		cin>>m>>c;
		for(int i=0;i<c;i++){
			cin>>k;
			for(int j=0;j<k;j++){
				cin>>glist[i][j];
				cout << "puto el que lee\n";
			}
		}
	}
	return 0;
}