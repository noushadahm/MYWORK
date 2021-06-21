#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int ar[n];
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    
    cin >> ar[i];
    cnt[ar[i]]++;
  }
  vector<int> res;
  
  for(int i=0; i<n; i++ ){
    res.push_back(cnt[ar[i]]);	
  }
  sort(res.begin(), res.end());
  int sum=0;
  int mi=10000;
  for(int i=0; i<res.size(); i++){
      sum+=res[i];	
  }
  for(int i=0; i<res.size(); i++){
      int re=sum-((res.size()-i)*res[i]);
      cout<<re;	
      mi =min(mi, re);
  }
  cout<<mi<<"\n";
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
