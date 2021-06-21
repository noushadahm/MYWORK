#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef int ll;
  

int main(){
   ll n, m;
   cin>>n>>m;
   ll x[n], y[n];
   for(ll i=0; i<n; i++){
    cin>>x[i]>>y[i];
    	
     }
     ll a[n],b[n],c[n],d[n];
      for(ll i=0; i<m; i++){
        	
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    	 }
    	 
      for(ll i=0; i<m; i++){
        if(a[i]>c[i]){
         cout 	
         swap(&a[i],&c[i]);
         swap(&b[i],&d[i]);	
        }
       if(i%2==0){
         cout<<-a[i]<<" "<<-b[i]-1<<"\n";	
       }else{
         cout<<1000000+1-a[i]<<" "<<1000000-b[i]<<"\n";	
       }	
     } 	 
	      
	       
     return 0;
}
