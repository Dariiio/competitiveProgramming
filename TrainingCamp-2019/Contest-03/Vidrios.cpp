#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> ii;
#define fs first
#define sn second
#define pb push_back
#define inf -1000000
 
int main() {
    int w,h,n;
    cin>>w>>h>>n;
    char a;
    int b;
    ii W = {0,w};
    ii H = {0,h};
    set<ii> cortesW;
    set<ii> cortesH;
    cortesW.insert(W);
    cortesH.insert(H);
    set<int> maxW;
    set<int> maxH;
    maxW.insert(w);
    maxH.insert(h);
    int Wmax, Hmax;
    while(n--){
        cin>>a>>b;
        if(a=='V'){
            auto itr = cortesW.lower_bound({b,-inf});
            cortesW.insert({itr->fs,b-(itr->fs)});
            cortesW.insert({b,(itr->sn)-b});
            maxW.insert(b-(itr->fs));
            maxW.insert((itr->sn)-b);
            maxW.erase(itr->sn);
            cortesW.erase(*itr);
        }
        else{
            auto itr = cortesH.lower_bound({b,-inf});
            cortesH.insert({itr->fs,b-(itr->fs)});
            cortesH.insert({b,(itr->sn)-b});
            maxH.insert(b-(itr->fs));
            maxH.insert((itr->sn)-b);
            maxH.erase(itr->sn);
            cortesH.erase(*itr);
        }
        Wmax = *(maxW.rbegin());
        Hmax = *(maxH.rbegin());
        cout<<Wmax*Hmax<<endl;
    }
    return 0;
}
