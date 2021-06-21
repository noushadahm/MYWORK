#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  
     int n,k;
     
     cin>>n>>k;
     int ar[n];
     int sum=0;
     for(int i=0; i<n; i++){
       cin>>ar[i];
    }
     sort(ar, ar+n);
     int l=0;
     int r=k-1;
     int ma=0;
     while(r!=n){
     int med=(r+l-1)/2;
     med=ar[med];
     ma=max(ma,med);
     l++;
     r++;	
     }
    cout<<ma;
   	
   
   return 0;
   
}
