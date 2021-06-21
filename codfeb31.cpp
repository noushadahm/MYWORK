#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
   int  t;
   cin>>t;
   while(t--){
     ll d,c;
     cin>>d>>c;
     ll a[3];
     ll b[3];
     cin>>a[0]>>a[1]>>a[2];
     cin>>b[0]>>b[1]>>b[2];
     ll sum1=a[0]+a[1]+a[2];
      ll sum2=b[0]+b[1]+b[2];
      ll withd;
      ll withc;
      int r=150;
      if(sum1>=r&&sum2>=r){
        withc=sum1+sum2+c;
        withd= sum1+sum2+d+d;	
      }else if(sum1>=r){
          withc=sum1+c+sum2+d;
          withd=sum1+d+sum2+d;	
      }else if(sum2>=150){
         withc=sum1+c+sum2+d;
          withd=sum1+d+sum2+d;	
      }else{
         withc=sum1+d+sum2+d;
          withd=sum1+d+sum2+d;	
      }
      
      
     if(withc<withd){
       cout<<"YES\n";	
     }else{
       cout<<"NO\n";	
     }	
     	
   }
 
   
   return 0;	
}
