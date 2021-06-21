#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
	

int main(){
   int t;
    scanf("%d", &t);
   while(t--){
   	
    int n;
     scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);	
    }
    while(n>0){
    
     int max=ar[0];
     int mini=0;
    for(int i=1; i<n; i++){
       if(ar[i]>max){
         max=ar[i];
         mini=i;	
       }
       	
    } 
    for(int i=mini; i<n; i++){
       printf("%d",ar[i]);
       printf(" ");	
    }
    
    n=mini;
    
    
}
   cout<<"\n";
   	
   }	
   return 0;
}
