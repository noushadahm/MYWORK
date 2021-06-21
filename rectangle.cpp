#include<iostream>
using namespace std;

class Rectangle{
    
    private:
    
    int length;
    int breadth;
    
    public:
    
    Rectangle(int l,int b){
        
        length=l;
        breadth=b;
    }
    
    int area(){
        
        return length*breadth;
        
    }
    
   int perimeter(){
        
        int p=2*(length+breadth);
        return p;
    }
        
    
};
 
int main(){
    Rectangle r(10,20);
    cout<<"area "<<r.area()<<"\n";
    cout<<"perimetre "<<r.perimeter();
    return 0;
}
