#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    unsigned long long  p,a,b,c;
   cin>>p>>a>>b>>c;
    unsigned long long  mi=0;
    unsigned long long  r1=p%a;
    unsigned long long  r2=p%b;
    unsigned long long  r3=p%c;
   if(r1==0||r2==0||r3==0){
     cout<<mi<<"\n";	
   }else{
     unsigned long long a1=((p/a )+1)*a;
      unsigned long long  a2= ((p/b)+1)*b;
      unsigned long long  a3= ((p/c)+1)*c;
     mi=min(a1-p, min(a2-p, a3-p));
     cout<<mi<<"\n";
     	
   }	
   }	
   return 0;
}
