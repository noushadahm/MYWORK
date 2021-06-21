#include<iostream>
#include<map>

#include<list>
template<typename T>
 
 class Graph{
    public:	
     map <T, list<T>> l;
    
    void addedge(T x, T y){
      l[x].push_back(y);
      l[y].push_back(x);	
    }
    void bfs(T src){
      map<T, int> visted;
      queue<T> q;
      q.push(src);
      cout<<src<<" ";
      visited[src]= true;
      while(!q.empty()){
      	T node = q.front();
      	q.pop();
      	for(auto &nbr: l[node] ){
	      
      	if(!visited[node]){
      	    q.push(nbr);
	     visited[nbr] = true;    	
	      }
                    }
      }	
    }	
 };
 int main(){
     Graph<int> g;
     g.addedge(1,2);
     g.addedge(1,3);
     g.addedge(3,2);
     g.addedge(4,2);
     g.addedge(4,3);
     return 0;	
 }

