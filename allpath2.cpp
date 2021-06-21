#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector <int> g[100];

void allpath(bool visited[], int src, int des, vector<int> path){
       if(src==des){
         for(int i=0; i<path.size(); i++){
         	cout<<path[i]<<" ";
         }
         cout<<"\n";
         return;	
       }
      visited[src]=true;
      
      for(int j=0; j<g[src].size(); j++){
          int nbr=g[src][j];
          if(visited[nbr]==false){
             visited[nbr]=true;
             path.push_back(nbr);
             allpath(visited, nbr, des, path);
             path.pop_back();	
          }	
      } 
      visited[src]=false; 	
}
int main(){
  int n;
  cin>>n;
  
  while(n--){
    int v, u;
    cin>>v>>u;
    g[v].push_back(u);
    g[u].push_back(v);
    	
  }
   
  vector<int> path;
  bool visited[100]={false};
   int src;
   int des;
   cin>> src>>des;
   path.push_back(src);
   allpath(visited, src, des, path);
   return 0;
  	
}


