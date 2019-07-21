    #include <bits/stdc++.h>
     
     
    using namespace std;
    /*
    struct st{
    	int a,i;
    };
    bool cmp(st x,st y){ return x.a>y.a;}
    */
     
     
    int main()
    {
    	ios::sync_with_stdio(0);
    	cin.tie(NULL);
    	int q,n,ax,a[201000];
    	//st A[200100];
    	
    	cin>>q;
    	while(q--){
    		cin>>n;
    		
    		memset(a,0,sizeof(a));
    		
    		for(int i=1;i<=n;i++) cin>>ax,a[ax]++;
    		
    		sort(a+1,a+n+1,greater<int>());
    		
    		//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    		
    		int sum = a[1],maxx = a[1];
    		for(int i=2;i<=n;i++){
    			//cout<<"sum: "<<sum<<" a: "<<i<<" maxx: "<<maxx<<"\n";
    			if(a[i] >= maxx){
    				if(maxx < 0) maxx = 0;
    				if(maxx-1 > 0) sum+=maxx-1,maxx--;
    			}
    			else if(a[i] < maxx) sum += a[i], maxx = a[i];
    		}
    		
    		
    		cout<<sum<<"\n";
    		//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    			
    		
    	}
     
     
    	return 0;
    }
