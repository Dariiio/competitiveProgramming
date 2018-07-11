#include <bits/stdc++.h>
using namespace std;

vector <string> b = {"Happy", "birthday","to","you","Happy", "birthday","to","you","Happy", "birthday","to","Rujia","Happy", "birthday","to","you"};
int main() {
	int n;
	cin>>n;
	vector <string> x(n);
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int i=0, e=0, cont=0, max;
	max = ceil((float)n/16);
	while(cont<max){
		//cout<<"----"<<cont;
		if(e==n) e=0;
		if(i==16) {i=0;cont++;}
		if(cont>=max) break;
		cout<<x[e]<<": "<<b[i]<<endl;
		i++;e++;
	}
	return 0;
}