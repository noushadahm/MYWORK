#include <iostream>
using namespace std;
int Check(int);
int main() {
	int n, i,j; 
	cin>>n;
	int coin[n];
	for(i=0; i<n; i++){
	    cin>>coin[i];
	    
	   // cout<<"\n";
	}
	for(j=0;j<n;j++){
	 int res=Check(coin[j]);
	 cout<<res;
	 cout<<"\n";	
	}
	
	return 0;
}

int Check(int n){
    int r= n/2+n/3+n/4;
    if(r<n){
        return n;
    }else if(r>n){
        return Check(n/4)+Check(n/3)+Check(n/2);
    }else{
        return r;
    }
}

