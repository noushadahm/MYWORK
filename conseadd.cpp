#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
bool ans(ll a[][1000], ll b[][1000], ll r, ll c ) {
    	
    for(ll i=0; i<r; i++){
       for(ll j=0; j<c; j++){
         
         if(a[i][j]!=b[i][j]){
            return false;
         }	
           	
       }	
    }	
    
    return true;
    	
}
int main(){
   ll t; 
   cin>>t;
   while(t--){
    ll r,c,x;
    
    cin>>r>>c>>x;
     
    ll a[1000][1000]={0};
    ll b[1000][1000]={0};
    for(ll i=0; i<r; i++){
       for(ll j=0; j<c; j++){
        cin>>a[i][j];	
           	
       }	
    }
    
    for(ll i=0; i<r; i++){
       for(ll j=0; j<c; j++){
        cin>>b[i][j];	
           	
       }	
    }
     
     if(r<x&&c<x){
       bool sol=ans(a,b,r,c);
       if(sol){
         cout<<"YES\n";	
       }else{
         cout<<"NO\n";	
       }	
     }else if(r<x){
      
         for(ll i=0; i<r; i++){
           for(ll j=0; j<c-x+1; j++){
              if(a[i][j]==b[i][j]){
                 continue;	
                  }
               ll d=b[i][j]-a[i][j];
               a[i][j]+=d;
               ll k=1;
               while(k<x){
               	a[i][j+k]+=d;
               	k++;
               }	
           	
       }
       }
       
        bool sol=ans(a,b,r,c);
       if(sol){
         cout<<"YES\n";	
       }else{
         cout<<"NO\n";	
       }		
    		
     }else if(c<x){
        for(ll i=0; i<c; i++){
           for(ll j=0; j<r-x+1; j++){
              if(a[j][i]==b[j][i]){
                 continue;	
                  }
               ll d=b[j][i]-a[j][i];
               a[j][i]+=d;
               ll k=1;
               while(k<x){
               	a[j+k][i]+=d;
               	k++;
               }	
           	
       }
       }
       
        bool sol=ans(a,b,r,c);
       if(sol){
         cout<<"YES\n";	
       }else{
         cout<<"NO\n";	
       }		
     }else if(c>=x&&r>=x){
         for(ll i=0; i<r; i++){
           for(ll j=0; j<c-x+1; j++){
              if(a[i][j]==b[i][j]){
                 continue;	
                  }
               ll d=b[i][j]-a[i][j];
               a[i][j]+=d;
               ll k=1;
               while(k<x){
               	a[i][j+k]+=d;
               	k++;
               }	
           	
       }
       }
       for(ll i=0; i<c; i++){
           for(ll j=0; j<r-x+1; j++){
              if(a[j][i]==b[j][i]){
                 continue;	
                  }
               ll d=b[j][i]-a[j][i];
               a[j][i]+=d;
               ll k=1;
               while(k<x){
               	a[j+k][i]+=d;
               	k++;
               }	
           	
       }
       }
       
       	
       
        bool sol=ans(a,b,r,c);
       if(sol){
         cout<<"YES\n";	
       }else{
         cout<<"NO\n";	
       }		
     }
    		
   }
   return 0;	
}
