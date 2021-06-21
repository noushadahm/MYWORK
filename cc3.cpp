#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ar[n];
    
    int temp[n];
    vector<pair<int, int> > ans;
    
    for(int i=0; i<n; i++){
      cin>>ar[i];	
      ans.push_back(make_pair(ar[i], (i+1)));
    }
    sort(ans.rbegin(), ans.rend());
    cout<<ans[0].second;
   // reverse(ans.begin(), ans.end());
  //  cout<<ans[0].first<<ans[0].second;
    for(int i=0; i<n; i++){
      
      temp[(ans[i].second)-1]=i+1;
    }
    
    
    for(int i=0; i<n; i++){
      cout<<temp[i]<<" ";
       
    }
    
    cout<<"\n";	
    }
    
      
      return 0;
      	
}
