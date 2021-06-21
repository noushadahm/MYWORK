#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct item{
     int weight,value;	
};
 
double compare(item a, item b){
   double val1= (double)a.value/a.weight;
   double val2= (double)b.value/b.weight;
   return val1<val2;	
} 
int main(){
   int t;
   cin>>t;
   while(t--){
     int n, k;
     cin>>n>>k;
     item ar[n];
     
     for(int i=0 ; i<n; i++){
       cin>>ar[i].weight;
       
       	
     }
      for(int i=0 ; i<n; i++){
       cin>>ar[i].value;
       
       	
     }
     sort(ar,ar+n,compare);
     int a1=0;
     int b1=0;
     int j=0;
     while(a1<=k){
       b1=b1+ar[j].value;
       a1=a1+ar[j].weight;
       j++;	
     }
     cout<<b1;
     cout<<"\n";
}
  return 0;
}

