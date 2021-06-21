#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   int a1, a2;
   int n;
   cin>>n;
   int ar[n];
   for(int i=0; i<n; i++){
   cin>> ar[i];
   	
   }	
   for(int j=0; j<n; j++){
      if(ar[j]==1){
       a1=j;
       j=n;	
      }
   	
   }
   
   for(int i1=n-1; i1>=0; i1--){
   if(ar[i1]==1){
    a2=i1;
    i1=-1;	
   }
   	
   }
   
   int ans=0;
   for(int j1=a1+1; j1<a2; j1++){
     if(ar[j1]==0){
     	ans++; 
     }	
   }
   cout<<ans;
   cout<<"\n";
   	
   }
   return 0;	
}
