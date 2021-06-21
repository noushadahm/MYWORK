#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;



int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll> > p,st;
    
    for(ll i=0; i<n; i++){
      int v;
      cin>>v;
      p.push_back({i+1,v});
      
    }
    if(n==2){
    cout<<"1\n";
    continue;	
    }
   
     ll baseh=p[0].second;
     ll basei=p[0].first;
     ll ans=1;
    for(ll i=1; i<n-1; i++){
       for(ll j=i+1; j<n; j++){
       double sib=((double)p[i].second-(double)baseh)/((double)p[i].first-(double)basei);
       double sjb=((double)p[j].second-(double)baseh)/((double)p[i].first-(double)basei);
       if(baseh>p[i].second&&p[j].second>p[i].second){
          ans=max(ans,p[j].first-basei);
          cout<<ans<<"debug1"<<"\n";
          i=j;	
       }else{
       	
       
        if(sjb<sib){
          p[j-1].first=basei;
          p[j-1].second=baseh;
          i=j;	
        }else{
         // i=j;	
           ans=max(ans,p[j].first-basei);
        }
       // ans=max(ans,p[j].first-basei);	
       	
       }	
      
    }
}
     cout<<ans;
     cout<<"\n";	
   }	
   return 0;
   	
}
