#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,d;
     cin>>n>>d;
     int ar[n];
     
     bool res=false;
     vector<int> ans;
     vector<int>ans1;
     for(int i=0; i<n; i++){
       cin>>ar[i];
       
       if(ar[i]>d){
        res=true;	
        ans.push_back(ar[i]);
        ans1.push_back(i);
       }	
     }
     sort(ans.begin(),ans.end());
     
     if(!res){
      cout<<"YES";
      cout<<"\n";	
     }else{
       bool k=false;	
      for(int i=0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
          if(ar[i]+ar[j]<=ans[0]&&ar[i]+ar[j]<=d){
            k=true;
            }
          	
         }	
      }
      	
     
    
    if(k){
     cout<<"YES";	
    }else{
      cout<<"NO"; 	
    }

     cout<<"\n";
   }
}
   return 0;	
}
