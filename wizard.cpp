#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
     int ar[200000];
     int n;
     cin>>n;
     int num=9;
     int count=0;
     bool con=true;
     for(int i=0; i<n; i++){    
       if(num==-1){
       con =false;
       num=1;	
       }
       if(num==10){
        con=false;
        num=0;	
       }
       if(con){
       	
       ar[i]=num;
       num--; }else{
        ar[i]=num;
        num++;
        	
       }	
     }
     for(int j=0; j<n; j++){
       cout<<ar[j];	
     }	
     cout<<"\n";
  }
  return 0;	
}
