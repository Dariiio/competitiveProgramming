#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	int n;
	cin>>n;
		//if(n==0)break;
		for(int f=1234;f<=98765/n;f++){
			int a=f*n;
			int tmp, used=(f<10000);
			tmp=a;while(tmp){used |=1 <<(tmp%10); tmp/10;}
			tmp=f;while(tmp){used |=1 <<(tmp%10); tmp/10;}
			if(used==(1<<10)-1)
				printf("%0.5d / %0.5d = %d\n", a,f,n);
			else{
				cout<<"There are no solutions for "<<n<<".\n";
			}
		}
	
	return 0;
}