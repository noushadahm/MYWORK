#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool iscycle(int , vector<int>[]);
bool iscycleutil(bool[], vector<int>[], int);
int main(){
      int n, e;
      cin>>n>>e;
      vector<int> adj[n];
     
      int v, u;
      for(int i=0; i<e; i++){
         cin>>v>>u;
         adj[v].push_back(u);
         adj[u].push_back(v);
         	
      }
      
      if(iscycle(n, adj)){
        cout<<"yes"; 	
      }else{
        cout<<"no";	
      }
      
      return 0;	
}

bool iscycle(int v, vector<int> adj[]){
        bool vis[v]={false};
        bool flag=false;
        for(int i=0; i<v; i++){
           vis[i]=true;
           for(int j=0; j<adj[i].size(); j++){
              flag= iscycleutil(vis, adj, adj[i][j]);
              if (flag==true){
              	return true;
              }
              vis[i]=true;
           }	
        }
        return false;	
}

bool iscycleutil(bool vis[], vector<int> adj[], int cur){
                if(vis[cur]==true){
                	return true;
                }	
                vis[cur]=true;
                bool flag =false;
                for(int i=0 ; i<adj[cur].size(); i++){
                	flag= iscycleutil(vis, adj, adj[cur][i]);
                	if (flag==true){
	            return true;    }
	                
                }
                return false;
}
