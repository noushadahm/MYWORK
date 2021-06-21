#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  int A[n][n];
  int target;
  
  for(int i=0; i<n;i++){
     for(int j=0; j<n; j++){
        cin>>A[i][j];
        	
     }	
  }
  vector<int> ans;
  cin>>target;
  int l=0;
  int r=n-1;
  int mid=(l+r)/2;
  while(l<=r){
     if(A[mid][0]<target){
       l=mid+1;
       	
     }else if(A[mid][0]>target){
       if(A[mid-1][0]<target){
         break;}
         else{
         r=mid-1;	}
       	
     }
     else{
        break;	
     }	
  }
  int a=mid;
   ans.push_back(mid);
   
  int l1=0;
  int r1=n-1;
  int mid1=(l1+r1)/2;
  while(l1<r1){
     if(A[a][mid]<target){
       l1=mid1+1;
       	
     }else if(A[a][mid1]>target){
       r1=mid1-1;	
     }else{
        	
        break;	
     }	
  }
  ans.push_back(n-mid1);
  cout<<ans[1];
  cout<<" ";
  cout<<ans[0];
  
  return 0;	
}
