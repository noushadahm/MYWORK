#include<iostream>
#include <bits/stdc++.h>
#include<map>

using namespace std;
int main(){
	
    int n,t;
    cin>>t;
    while(t--){
    map<int, int> m;
    
    cin>> n;
    int ar[n];
    int res[n];
    
    for(int i= 0; i<n; i++){
     cin>> ar[i];
     if(m.count(ar[i])==0){
       m.insert(ar[i], 1);	
     }else{
       int x= m[ar[i]];
       m[ar[i]]=x+1;
       
        	
     }
     int temp=0;
   //   iterator it;
     // int m=0;
     for(auto i:m){
         	
        if(i.second==1){
         res[temp]=i.first;
         temp= temp+1;	
        }	
     }
     
     sort(res,res+n);
     cout<<res[0];
     	
    }
    
        	
      
     
   return 0;
   
}
