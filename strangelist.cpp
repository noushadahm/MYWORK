#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,x;
      cin>>n>>x;
      int ar[1000];
      int sum=0;
     // vector<int> res;
      for(int i=0; i<n;i++){
        cin>>ar[i];
       // res.push_back(ar);	
      }	
      for(int i=0;i<n;i++){
         if(ar[i]%x==0){
           for(int j=0; j<x; j++){
           //	res.push_back(res[i]/x);
              
               ar[n]=ar[i]%x;
              sum=sum+ar[i]/x;           
              n=n+1;	
           }	
         }else{
         	
         	i=n;
         }	
      }
      
      cout<<sum;
      cout<<"\n";
    }
    return 0;	
}

