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
    for(int i=0; i<n; i++){
      cin>>ar[i];
      	
    }
    sort(ar, ar+n);
    int count=0;
    
    for(int i=n-1; i>=0; i--){
        for(int j=i-1;j>=0; j--){
           if(ar[i]>ar[j]){
             count++;
             j=-1;	
           }	
        }
    }
    
        cout<<count;
        cout<<"\n";	
         
    	
    }	
    
    return 0;
}
