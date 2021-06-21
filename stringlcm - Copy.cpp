#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   int n=s.length();
   int m=t.length();
   string s1="";
   string s2="";
   int lcm= (n*m)/__gcd(n,m);
   int i=max(lcm/n, lcm/m);
   while(i--){
    if(s1.length()<lcm)	
     s1+=s;
     if(s2.length()<lcm)
     s2+=t;
     	
   }
   cout<<s1<<"\n";
   cout<<s2<<"\n";
   if(s1==s2){
     cout<<s1;	
   }else{
    cout<<"-1";	
   }
   return 0;	
}
