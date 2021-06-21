#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    long long k;
    long long ar[10];
    for(int i=0; i<10; i++){
      cin>>ar[i];	
    }
    cin>>k;
    int i=9;
    while(k>=0&&i>=0){
      if(ar[i]>k){
       break;	
      }	
      k=k-ar[i];
      ar[i]=0;
      i--;
      	
    }
   
    int ind=1;

    for(int i=1; i<10; i++){
       if(ar[i]!=0){
          ind=i+1;
          	
       }	
    }
    cout<<ind;
    cout<<"\n";	
   }	
   return 0;
}
