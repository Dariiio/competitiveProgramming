#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int t;
long long n;
string s;

int ans[]={0,16,56,96,36,76};

#define MOD 100

long long convert () {
    long long number = 0;
    int ln = s.length();
    for (int x = 0; x < ln; x++) {
        number = number * 10;
        number = (number + (s[x] - '0')) % MOD;
    }
    return number % MOD;
}

int main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="0")cout << 1 << "\n";
		else if(s=="1") cout << 66 << "\n";						
		else{
			long long N=convert();		
			int ult=N%10;			
			if(ult%5==0)cout << ans[5] << "\n";
			else cout << ans[ult%5] << "\n";
		}
	}
	return 0;
}