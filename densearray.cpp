#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   int n; 
   cin>>n;
   int ar[n];
   for(int i=0; i<n; i++){
      cin>>ar[i];
   }
   int count=0;
   for(int i=0; i<n-1; i++){
     int a= max(ar[i], ar[i+1]);
     int b= min (ar[i], ar[i+1]);
     
     
       while(a>b*2){
         b=b*2;
         count++;	
       }	
     
     	
   }
    cout<<count<<"\n";	
   }	
   
   return 0;
}
