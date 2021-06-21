#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
 int data ; 
 struct node *next;
 	};
    
    struct node *head=NULL;
     struct node *tail=NULL;
    int size=0; 
     
    	
 	
    int main(){
    
          int i;
       for(i=0; 1<10; i++){
    insert(i);
    	}	
      
        insert(10);
        display();
        
        return 0;
        
     	
    }
    
    void insert(int item){
      struct node *n;	
     n=(struct node*)malloc(sizeof(struct node));
     n->data=item;
     n->next=NULL;
     
     
     if(size>0){
      tail->next=n;
      	
     }
     if(size==0){
      head=n;
      tail=n;
      size++;	
     }else{
       tail=n;
       size++;	
     }
     	
    }
    
    void display(){
      struct node *temp;	
      temp =head;
      while(temp!=NULL){
       printf("%d ", temp->data);
       temp=temp->next;
      }
    	
    }	
