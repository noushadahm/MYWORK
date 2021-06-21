#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int count =1;
    int l=s.length();
    for(int i=0; i<l;i++){
      int asci = (int)s[i];
      if(count%2==1){
        if(s[i]=='a'){
          cout<<"b";	
        }else{
          cout<<"a";	
        }
        	
      }else{
      if(s[i]=='z'){
       cout<<"y";	
      }else{
        cout<<"z";	
      }
      	
      }  
     count++; 
      	
    }
    
    cout<<"\n";	
   }
   
   return 0;	
}
