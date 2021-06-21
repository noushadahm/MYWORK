#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
    int t;
    cin>>t;
    while(t--){
      int a, b;
      cin>>a>>b;
      int count =0;
      while(a!=0){
        if(a!=b){
          a=a/b;	
          count++;
        }else{
           b=b+1;	
           count++;
        }	
      }
      
      cout<<count;
      cout<<"\n";
      	
    }	
   return 0;	
}
