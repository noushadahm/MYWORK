#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int ar[n];
    int apos=1;
    int bpos=n;
    
    bool visited[n+1]={false};
    int j=n;
    int i=1;
    for(int k1=0;k1<k; k1++){
        if(i==j){
          visited[i]=true;
            
//          if(j==1){
//           j=n;	
//          }else{
//           j--;}	
                     
          
            if(i==n+1){
               i=1;
            
             while(visited[i]==true){
              i++;
              	
               }
             	
              }else{
                 i++;
                     while(visited[i]==true){
                       if(i==n+1){
                        i=1;	
	     }else{
	     	
                         i++;
                         }
                    }
	  	
                 }
                 
}
              else{
               if(j==0){
                j=n;	
               }else{
                j--;	
                    }
                    
               
               if(i==n+1){
                  
            
                while(visited[i]==true){
                	if(i==n+1){
                	i+1;	
	                }else{
	                
                    i++;}
              	
               }
             	
                }else{
                   
                     while(visited[i]==true){
                       if(i==n+1){
                        i=1;	
	     }else{
	     	
                          i++;
                        }
                    }     
                    
              }
          	
          }
          
}
          
          cout<<i;
          cout<<"\n";	
        }
        
        
        return 0;	
    }
   	
         
    	
   
