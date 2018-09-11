#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)
#define mkp make_pair
#define dpr(v) cout << #v"=" << v << endl //;)
#define dpra(a,n) { forn(i,(n)) cout << (a)[i] << (i==(n)-1?'\n':' '); }
#define dprv(vec) dpra(vec,sz(vec))
#define all(v) (v).begin(), (v).end()

const int mod = 1e9 + 7;

int dp[100][2];

void add(int &a, int b){
    a += b;
    if(a >= mod)
        a -= mod;
}
int main(){
    int n, k, d;
    cin >> n >> k >> d;
    dp[0][0] = 1;
    dp[0][1] = 0;
    for(int i = 1 ; i <= n ; ++i){
        dp[i][0] = dp[i][1] = 0;
        for(int j = 1 ; j <= k ; ++j){
            if(i-j < 0) break; 
            if(j < d){
                add(dp[i][0], dp[i-j][0]);
                add(dp[i][1], dp[i-j][1]);
            }
            else{
                add(dp[i][1], dp[i-j][0]);
                add(dp[i][1], dp[i-j][1]);
            }
        }
    }
    cout << dp[n][1] << "\n";
    return 0;
}
