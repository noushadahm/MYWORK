#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     long long m,h;
     cin>>m>>h;
     long long ans=m/(h*h);
     if(ans<=18){
       cout<<"1";
       	
     }else if(ans>18 &&ans<25){
         cout<<"2";	
     }else if(ans>24&&ans<30){
         cout<<"3";	
     }else{
        cout<<"4";	
     }
     cout<<"\n";	
    }
    
      
      return 0;
      	
}
