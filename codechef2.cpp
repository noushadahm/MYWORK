#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     long long ar[k];
     for(int i=0; i<k; i++){
        cin>>ar[i];	
     }
     string s[n];
     for(int i=0; i<n; i++){
       cin>>s[i];	
     }
     long long ans[n]={0};
     for(int i=0; i<n;i++){
       for(int j=0; j<k; j++){
       
        if(s[i][j]=='1'){
          ans[i]+=ar[j];	
        }
        	}
     }
     
     for(int i=0; i<n; i++){
        cout<<ans[i]<<"\n";	
     }
     	
    }
    
      
      return 0;
      	
}
