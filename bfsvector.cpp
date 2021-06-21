#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void bfs(int);
vector <bool> v;
vector<vector<int> > g;

void edge(int u, int v){
    g[u].push_back(v);
    	
}

   void bfs(int src){
      queue<int>q;
      q.push(src);
      v[src]=true;
     // cout<<src<<" ";
      while(!q.empty()){
          int node=q.front();
          q.pop();
          cout<<node<<" ";
          for(auto i=g[node].begin(); i!=g[node].end(); i++){
          	if(!v[*i]){
          		q.push(*i);
          		v[*i]=true;
	          }
          }	
      }	
   }
int main(){
     int n, e;
     cin>>n>>e;
     v.assign(n, false);
     g.assign(n, vector<int>());
     int a, b;
     for(int i=0; i<e; i++){
       cin>>a>>b;
       edge(a,b);
       	
     }
     
    // for(int j=0; j<n; j++){
     //   if(!v[j]){
         bfs(0);	
      //  }	
   //  }
     
     return 0;
     	
}
