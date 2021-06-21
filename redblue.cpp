#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
    int n,m;
    cin>>n;
    int red[n];
    for(int i=0;i<n;i++){
       cin>>red[i];	
    }
    cin>>m;
    int blue[m];
    for(int j=0;j<m;j++){
       cin>>blue[j];	
    }
    int mix[n+m];
    for(int k=0;k<n+m; k++){
       if(k<n){
         mix[k]=red[k];	
       }else{
         mix[k]=blue[k];	
       }	
    }
    int m1[n+m+1];
    for(int x=0;x<n+m;x++){
      	
    }
    cout<<m1;
    cout<<"\n";
    	
     	
    }
    
    
    return 0;
}

