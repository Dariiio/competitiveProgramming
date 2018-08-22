#include<bits/stdc++.h>
using namespace std;

int v[]={1,5,10,20,100},n;

int w(int type,int value){
	if(value==0) return 1;
	if(value<0 || type==5) return 0;
	return w(type+1,value);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	cin>>n;
	//cout<<w(0,n);
	int ans=0;
	for (int i=4; i>=0; i--)
        {
            if (n >= v[i])
            {
                ans += n/v[i];

                if (n % v[i] == 0)
                    break;
                else
                    n -= ((n / v[i]) * v[i]);
            }
	}
	cout<<ans;
	return 0;
}