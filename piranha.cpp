#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   	
   int n ;
   int count;
   cin>>n;
   int ar[n];
   int ans[n];
   for(int i=0; i<n; i++){
   cin>>ar[i];
   	
   }
   int l,r;
   
     for(int i=0; i<n-1; i++){
        l=i-1;
        r=i+1;
        ans[i]=ar[i];
        while((ar[i]>ar[l]||ar[i]>ar[r])&& (l>=0 || r<n-1)){
        if(ar[i]>ar[l]&&l>=0){
           ans[i]=ans[i]+1;
           l--;	
        }else{
          l=-1;	
        }
        
        	
         if(ar[i]>ar[r]&&r<=n-2){
           ans[i]=ans[i]+1;
           r++;	
        }else{
           r=n;	
        }		
        	
        }	
      
   	
   }
   
   int max=ans[0];
   int ind=0;
   for(int a=1; a<n; a++){
      	
      if(ans[a]>max){
        max =ans[a];
        ind= a;	
      }
      	
   }
   
   if(max==ar[ind]){
     cout<<"-1";
     	
   }else{
     ind= ind+1;
     cout<<ind;
     	
   }
   cout<<"\n";
}
   
   return 0;
   	
   	
}
