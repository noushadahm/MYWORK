#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void dfs(int , vector<int>[], bool*);
int main(){
  int n,e;
  cin>> n>>e;
  vector<int> g[n];
  bool vis[n];
  memset(vis, false, n);
  int u,v;
  for(int i=0; i<e; i++){
     cin>>u>>v;
     g[u].push_back(v);
     g[v].push_back(u);
     	
  }
  dfs(0, g, vis);
  cout<<endl;
  return 0;	
}
void dfs(int s, vector<int> g[], bool *vis){
       vis[s]=true;
       cout<<s<<" ";
       for(int i=0; i<g[s].size(); i++){
             if(vis[g[s][i]]==false)
             {
             	dfs( g[s][i], g, vis);
             	
	             }	
       }
       return;	
}
