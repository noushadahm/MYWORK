// A simple representation of graph using STL, 
// for the purpose of competitive programming 
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std; 
 int *count=0;

// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 


void DFSUtil(int u, vector<int> adj[],vector<bool> &visited,int &count) 
{ 
	visited[u] = true; 
//	cout << u << " "; 
	for (int i=0; i<adj[u].size(); i++) {
	
		if (visited[adj[u][i]] == false) {
		
		                   count++;
			DFSUtil(adj[u][i], adj, visited,count); }}
			
		
			
} 

// This function does DFSUtil() for all 
// unvisited vertices. 
void DFS(vector<int> adj[], int V) 
{ 
	vector<bool> visited(V, false); 
	int u=0;
	
	DFSUtil(u, adj, visited,int count=0); 
} 

// Driver code 
int main() 
{ 
	int V = 5; 

	vector<int> adj[V]; 

	// Vertex numbers should be from 0 to 4. 
	addEdge(adj, 1, 2); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 
	addEdge(adj, 4, 2); 
                  
	DFS(adj, V); 
//	cout<<count;
	return 0; 
} 


