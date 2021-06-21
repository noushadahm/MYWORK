#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int count(int n){
   int ans=0;
   
   while(n!=0){
      n= n/10;
      ans++;	
   }
   if(ans==1){
     return 1;
    	
   }else if(ans==2){
   	return 3;
   	
   }else if(ans==3){
   	return 6;
   }else{
   	return 10;
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
     int res,n;
     cin>>n;
     res= (n%10 -1);
     int ans1= res*10+count(n);
     cout<<ans1;
     cout<<"\n";
     	
   }	
}

