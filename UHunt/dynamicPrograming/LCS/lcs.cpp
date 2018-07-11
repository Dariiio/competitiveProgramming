#include<bits/stdc++.h>
using namespace std;

int arr[1234][1234];

//return the length of lcs
int lcs(const char* const first,const char* const second){
	if(arr[*first][*second]!=-1)
		return arr[*first][*second];
	if(*first=='\0' || *second=='\0')
		return arr[*first][*second]=0;
	if(*first==*second)
		return arr[*first][*second]=1+lcs(first+1,second+1);
	else
		return arr[*first][*second]=max(lcs(first+1,second),lcs(first,second+1));
}


/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs2( char *X, char *Y, int m, int n ){
	if(arr[m][n]!=0)return arr[m][n];
	if(m == 0 || n == 0)
		return 0;
	if(X[m-1] == Y[n-1])
    	return arr[m][n]=1 + lcs2(X, Y, m-1, n-1);
	else
    return arr[m][n]=max(lcs2(X, Y, m, n-1), lcs2(X, Y, m-1, n));
}


int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//char a[]="ABCDGH", b[]="AEDFHR";
	//memset(arr,0,sizeof(arr));
	char a[1000],b[1000];
	//cin>>a>>b;
	//cout<<a<<"-"<<b;
	//cout<<lcs(a,b,strlen(a),strlen(b));
	while(cin>>a>>b){
		memset(arr,-1,sizeof(arr));
		cout<<lcs(a,b)<<"\n";
	}

	return 0;
}