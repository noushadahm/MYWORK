#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;



void haspath(int **ar, int start,int n,bool *visited, vector<int> component){
           
            visited[start]=true;
            component.push_back(start);
            cout<<start<<" ";
            
            for(int i=0; i<n; i++){
                 if(start==i){
                 	continue;}
                 	if(ar[start][i]==1&&!visited[i]){
                 	haspath(ar,i,n,visited, component );
                      		      	
	                 }

            }
            
           	
}
int main(){
     int n ;
     int e;
     cin>>n>>e;
     int **ar;
     ar=new int*[n];
     for(int i=0; i<n; i++){
         ar[i]=new int[n];	
         for(int j=0; j<n; j++){
            ar[i][j]=0;	
         }	
     }
     int u,v;
     
     
     
         for(int j=0; j<e; j++){
            cin>>u>>v;                // while taking input take care of u and v<n 

            	
            ar[u][v]=1;
            ar[v][u]=1;	
         }	
     
     bool *visited=new bool[n];
    for(int i=0; i<n; i++){
       visited[i]=false;	
    }
   vector<vector<int> > c;
     for(int v=0; v<n; v++){
       if(visited[v]==false){
       vector<int> component;
    haspath(ar,v,n,visited,component);
         c.push_back(component);
         cout<<"\n";
         	
      
    
    }
    }  
    
    for(int i=0; i<c.size(); i++){
      sort(c.begin(), c.end());
      for(int j=0; j<c[i].size(); j++){
         cout<<c[i][j]<<" ";	
      }
      cout<<"\n";	
    }
 
       
    
     return 0;	
}
