//#include <bits/stdc++.h>
#include<iostream>
#include<vector> 
#include<map>
using namespace std; 

void printFrequency( int vec[], int n) 
{              
	// Define an map 
	map<int, int> M; 

	// Traverse vector vec check if 
	// current element is present 
	// or not 
	for (int i = 0; i<n; i++) { 

		// If the current element 
		// is not found then insert 
		// current element with 
		// frequency 1 
		if (M.find(vec[i]) == M.end()) { 
			M[vec[i]] = 1; 
		} 

		// Else update the frequency 
		else { 
			M[vec[i]]++; 
		} 
	} 
                  // cout<<"kj";
	// Traverse the map to print the 
	// frequency  
	vector <int> v;
	for (auto const&it : M) { 
		if(it.second==1){
		    v.push_back(it.first);
		   // cout<<"hg";
		}
	}
	 if(v.empty()){
	  cout<<"-1";
	 // cout<<"my";	
	 }
	 else{
	 
             // cout<<"ab";
	    int min= v[0];
	    for(int j=1; j<v.size(); j++){
	        if(v[j]<min){
	            min =v[j];
	        }
	    }
	    for(int b=0; b<n; b++){
	      if(vec[b]==min)
	      {
	        cout<<b+1;	
	         b=n;	      }	
	    }
	  //  cout<<"iy";
	  
}
             cout<<"\n";
	
} 

// Driver Code 
int main() 
{                int t; 
                 cin>> t;
                 while(t--){
                  int n;
                  cin>>n;
	int vec[n] ;
	for(int a=0; a<n; a++){
	  cin>>vec[a];	
	}

	// Function call 
	printFrequency(vec,n); }
	return 0; 
}
 

