#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ARR[n];
  multiset<int> s;
  
  for(int i=0;i<n; i++ ){
     cin>>ARR[i];
     s.insert(ARR[i]);
     	
  }
    
   vector<int> ARRNEW;
   for(int i=0; i<n; i++){
      if(s.count(ARR[i])==1){
        ARRNEW.push_back(ARR[i]);	
      }	
   }
   int k=ARRNEW.size();
   for(int j=0; j<k; j++){
      cout<<ARRNEW[j];
      cout<<" ";
      	
   }
   
   return 0;	
}
