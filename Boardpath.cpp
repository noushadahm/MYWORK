#include<iostream>
using namespace std;
int boardpath(int, int);

int main(){
     int sum;	
    cout<<"enter the  sum\n";
    cin>>sum;
    cout<<boardpath(0, sum);
    return 0;
    	
}

int boardpath(int cur, int sum){
    int dice,count=0;
    if(cur==sum){
     return 1;	
    }
    if(cur>sum){
    return 0;	
    }
    for(int dice=1; dice<=6; dice++){
      count = count + boardpath(dice+cur, sum);	
    }
    return count;	
}
