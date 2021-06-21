#include<iostream>
using namespace std;
int main(){
  
  int n, m, k;
  cin>>n>>m>>k;
  int a[n][m];
  for(int i=0; i<n;i++){
     for(int j=0; j<m; j++){
         cin>>a[i][j];	
     }	
  }
  int best[m+1]={0};
  int sum=0;
  
  for(int i=0; i<n;i++){
     for(int j=0; j<m; j++){
        for(int a1=j+1; a1<m; a1++){
        	
        sum = a[i][a1]+a[i][j]; 	      
        if(sum%k==0){
          best[i+1]= max(sum, best[i]);	
        }	
     }	
  }
}
    int ans=0;
  
    for(int i=1; i<n+1;i++){
      ans= ans+best[i];	
  }
    cout<<ans;
   return 0;
   
  	
}
