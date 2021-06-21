#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int ar[n];
    int c0=0, c1=0, c2=0;
    for(int i=0; i<n; i++){
       cin>>ar[i];
       
       if(ar[i]%3==0){
         c0++;	
       }else if(ar[i]%3==1){
           c1++;	
       }else{
        c2++;	
       }
       	
    }
    
    int res=n/3;
    int ans=0;
    ans=ans+abs(c1%res-c0%res);
    ans=ans+abs(c2%res-c0%res);
    ans=ans+abs(c2%res-c1%res);
    cout<<ans<<"\n";	
   }	
   
   return 0;
}
