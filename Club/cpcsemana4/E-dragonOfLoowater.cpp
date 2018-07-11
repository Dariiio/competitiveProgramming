#include<bits/stdc++.h>
using namespace std;

int n,m;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	while(cin>>n>>m){
		if(n==0&&m==0)break;
		int a[n],b[m];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<m;i++)cin>>b[i];
		if(n>m || *max_element(a,a+n)>*max_element(b,b+m)){
			cout<<"Loowater is doomed!\n";
		}else{
			sort(a,a+n);
			sort(b,b+m);
			//reverse(b,b+m);
			long long int tot=0,pos=-2;
			long long int min=99999999;
			int cont=0;
			for(int i=0;i<n;i++){
				cont=0;
				for(int e=0;e<m;e++){
					if(a[i]<=b[e] && b[e]!=-2){
						if(b[e]<min){
							min=b[e];
							pos=e;
						}
					}
				}
				if(pos!=-2)b[pos]=-1;
				tot+=min;
				min=99999999;
				pos=-2;
				for(int e=0;e<m;e++)
					if(b[e]==-1)cont++;
			}
			//cout<<"asd "<<cont;
			if(cont==n)
				cout<<tot<<"\n";
			else
				cout<<"Loowater is doomed!\n";
		}
	}
	return 0;
}
