    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
    	int num;
    	cin >> num;
    	while(num--) {
    		int n,mx=-1,ans=-1;
    		cin >> n;
    		int a[300003];
    		for(int i=1;i<=n;i++){
    			cin >> a[i];
    			mx = max(mx,a[i]);
    		}
    		a[0] = 1e9;
    		a[n+1] = 1e9;
    		for(int i=1;i<=n;i++) if(a[i] == mx && (a[i-1]<a[i]||a[i]>a[i+1])) ans = i;
    		cout << ans << endl;
    	}
    }
