#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n;
     string s;
     vector<char> res;
     cin>>n;
     cin>>s;
     
     int l=s.length();
      
       if(s[0]=='1'){
         res.push_back('2');	
       }else{
         res.push_back('1');	
       }
       	
       for(int i=1; i<l; i++){
         if(res[i-1]=='2'){
            res.push_back('1');	
         }else if(res[i-1]=='1'&&s[i]=='1'){
         	res.push_back('2');
         }else if(res[i-1]=='1'&&s[i]=='0'){
         	res.push_back('0');
         }else if(res[i-1]=='0'&&s[i]=='1'){
         	res.push_back('2');
         }else if(res[i-1]=='0'&&s[i]=='0'){
            res.push_back('1');	
         }
         	
       }
       string a;
       for(int i=0; i<l; i++){
           if(res[i]=='2'&&s[i]=='1'){
              a[i]='1';	
           }else if(res[i]=='1'&&s[i]=='1'){
           	a[i]='0';
           }else if(res[i]=='1'&&s[i]=='0'){
           	a[i]='1';
           }else{
           	a[i]='0';
           }		
       }
      for(int j=0; j<l; j++){
      	cout<<a[j];
      }	
     
     cout<<"\n";	
}
   return 0;
}

