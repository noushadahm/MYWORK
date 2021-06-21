#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
   string s1="hello";
   string s2="world";
   s1+=s2;
   int i=10;
   string str= to_string(i);
   s1+=str;
   cout<<s1;
   return 0;	
}
