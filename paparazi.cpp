#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;
#define sec second 
#define  fir first

ll orient(pair<ll,ll> p,pair<ll,ll> q,pair<ll,ll> r){
    
    ll val= (q.sec-p.sec)*(r.fir-q.fir)-(q.fir-p.fir)*(r.sec-q.sec);
    if(val==0){
     return 0;	
    }
    if(val>0){
     return 1;	
    }
    return 2;	
}

 pair<ll, ll> secondTop(stack<pair<ll, ll> > &s){
     pair<ll,ll> p=s.top();
     s.pop();
     pair<ll,ll> r=s.top();
     s.push(p);
     return r;	
 }

  ll max(ll a, ll b){
    if(a>b){
     return a;	
    }
    return b;	
  }
 ll absl(ll a, ll b){
    if(a>b){
     return a-b;	
    }
    return b-a;	
}


int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll> > vec(n);
    
    
    for(ll i=0; i<n; i++){
      ll v;
      cin>>v;
      vec[i]={i+1,v};
      
    }
    
    stack <pair<ll,ll> > st;
    st.push(vec[0]);
    st.push(vec[1]);
    
   
    for(ll i=2; i<n; i++){
      if(st.size()<2){
        st.push(vec[i]);	
      }
      else{
          if(orient(secondTop(st),st.top(),vec[i])==1){
          	st.push(vec[i]);
          }else{
            while(st.size()>=2&&orient(secondTop(st),st.top(),vec[i])!=1){
            	st.pop();
            }
            st.push(vec[i]);	
          }	
      }
     }
      ll ans=1;
      while(st.size()>=2){
        pair<ll,ll> pt=st.top();
        st.pop();
          pair<ll,ll> qt=st.top(); 	 
          
         ans= max(ans,absl(pt.first,qt.first));
      }
     cout<<ans;
     cout<<"\n";	
   }	
   return 0;
   	
}

