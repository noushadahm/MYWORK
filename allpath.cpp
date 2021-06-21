
#include<bits/stdc++.h>
using namespace std;

void haspath(int **graph, int src, int des, bool *visited,int n, string psf){
     if(src==des){
      cout<<psf<<"\n";
      return;	
     }
     
     visited[src]=true;
     
     for(int i=0;i<n; i++){
         if(graph[src][i]==1){
         
        if(visited[i]==false){
        	visited[i]=true;
            haspath(graph, i, des, visited, n,psf+to_string(i));
          
        }
        
        
     }
}
         visited[src]=false;
     
     	
}

int main(){
    int n, e;
    cin>>n>>e;
    int **graph=new int *[n];
    for(int a=0;a<n;a++){
          graph[a]=new int[n];	
          for(int b=0;b<n;b++){
          graph[a][b]=0;	
    }	
    }
   
    for(int i=0; i<=e; i++){
      int v,u;	
      cin>>v >> u;
      graph[v][u]=1;
      graph[u][v]=1;	
    }
    
     bool *visited= new bool [n];
     for(int i=0; i<n; i++){
       visited[i]=false;	
     }
    haspath(graph, 0, 4, visited,n, to_string(0)+"");
       
    
    delete [] visited;
    
    for(int i=0; i<n; i++){
      delete [] graph[i];	
    }
    return 0;
    	
}

