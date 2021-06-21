#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
   	
	
     int n;
     cin>>n;
     vector<int> a(n);
     vector<pair<int, int> > v;
     
    
      for(int i=0; i<n; i++){
       cin>>a[i];
      
     }
     int ind=-1;
      for(int i=1; i<n; i++){
       if(a[0]!=a[i]) {
          ind=i;
          v.push_back({1,i+1});	
       } 
      
     }
     if(ind==-1){
       cout<<"NO";
       continue;	
     }
     
      for(int i=1; i<n; i++){
       if(a[0]==a[i]){
         v.push_back({ind+1,i+1});	
       }
      
     }
     
     cout<<"YES";
     cout<<"\n";
     for(auto [x,y]:v) {
     cout<<x;
     cout<<" ";
     cout<<y;
     cout<<" ";
     
       cout<<"\n";}
}
      return 0;  
}
