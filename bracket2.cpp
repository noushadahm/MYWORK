#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
       string str;
       cin>>str;
       int count=0;
       stack<char> st;
       for(int i=0;i<str.length(); i++){
          if(str[i]=='('){
          	st.push('(');
          	
          }else if(str[i]==')'){
          	if(!st.empty()){
	          
          	st.pop();
          }else{   
                  count=1;
          	break;
          }
          }else if(str[i]=='?'){
           count++;	
          }
          
          }
          
       int cnt=count+1;
       
       if(st.empty()&&count%2==0){
         cout<<"YES";	
       }else if(st.empty()&&cnt%2==0){
           cout<<"YES";	
       }else if(st.size()%2==0&&count%2!=0&&st.size()>0){
           cout<<"YES";}
           else if(st.size()%2==0&&cnt%2!=0&&st.size()>0){
           cout<<"YES";}
       else{
         cout<<"NO";	
       }
       cout<<"\n";	
    }	
	
	
	
     return 0;
     	
}
