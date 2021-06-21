#include<iostream>
using namespace std;
int boardpath(int, int, int[]);

int main(){
     int sum;	
    cout<<"enter the  sum\n";
    cin>>sum;
    int ar[sum+1]={0};
    cout<<boardpath(0, sum, ar);
    return 0;
    	
}

int boardpath(int cur, int sum, int str[]){
    int dice,count=0;
    if(cur==sum){
     return 1;	
    }
   	
    
    if(cur>sum){
    return 0;	
    }
     if(str[cur]!=0){
     return str[cur];	
    }
    
    for(int dice=1; dice<=6; dice++){
      count = count + boardpath(dice+cur, sum, str);
      	
    }
    str[cur]=count;
    return count;	
}
