#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   int n,m;
   cin>>n>>m;
   char str[n];
   for(int a=0; a<n; a++){
   
   cin>>str[a];}
   vector<int> l;
    vector<int> r;
    set<int> ans;
    int x=0;
    ans.insert(x);
   for(int i=0; i<m; i++){
     cin>>l[i]>>r[i];	
   }
   for(int i=0; i<m; i++){
   
   for(int j=0; j<n; j++){
      if(j<l[i]&&j>r[i]){
       if(str[j]=='-'){
         x--;
         ans.insert(x);	
       }else{
        x++;
        ans.insert(x);	
       }	
      }	
   }
   int res=ans.size();
   
   cout<<res;
   cout<<"/n";
}
   cout<<"\n";
   }	
   
    return 0;	
}
