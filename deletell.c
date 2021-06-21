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
     void display();
     void insert(int);
    void removefirst();
    void removelast();
    void deletedata(int);
    void search(int);
  
     	
 	
    int main(){
        int data1, i=0,n,j,k;
        printf("enter the no. of inetgers you want to insert\n");
        scanf("%d", &n);
        while(i<n){
             
             
           scanf("%d",&data1);
            insert(data1);
            i++;
        } 
        
        printf("1. display\n");
         printf("2. insert\n");
          printf("3. removefirstelement\n");
           printf("4. remove last\n");
            printf("5. delete any value\n");
             printf("6. search\n");
              printf("7.exit\n");
              
               
        
        scanf("%d", k);
        for(j=0; j<10;j++){
        	
        switch(k){
        
        case 1:
        printf(" elements in the linked list are\n");
        
        
        display();
        printf("\n");
        case 3:
        removefirst();
        printf(" elements after deleting first  element\n");
        display();
        printf("\n");
        case 4:
        removelast();
        printf(" elements after deleting last element\n");
        display();
        printf("\n");
        case 5:
        printf("enter the no. you want to delete\n");
        scanf("%d", &data1);
        deletedata(data1);
        printf("linked list after deleting the chosen data\n");
        display();
        printf("\n");
        case 6:
        printf("enter the no. you want to search\n");
        scanf("%d", &data1);
        search(data1);
        case 7: break;
        case2: scanf("%d",&data1);
           insert(data1);
        }
       }
        return 0;
        
     	
    }
    
    void search(int item){
     struct node*temp = head;
     while(temp->data!=item){
       temp = temp->next;	
     }
     if(temp->data==item){
       printf(" YES the no. is present\n");
     }
     else{
        printf("NO the no. is not present\n");
     }
     	
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
    
    void removefirst(){
     	
     struct node *temp= head;
      head= head->next;
      free(temp);
    }
    
    void removelast(){
     struct node *temp= head;
     while(temp->next->next!=NULL){
      temp= temp->next;
     }
     free(temp->next->next);
     temp->next=NULL;
    }
    
    void deletedata(int item){
     struct node*temp=head;
     struct node *current;
     while(temp->next->data!=item){
      temp = temp->next;	
     }	
     current = temp->next->next;
     free(temp->next);
     temp->next=current;
     
    }
    
    void display(){
      struct node *temp;	
      temp =head;
      while(temp!=NULL){
       printf("%d ", temp->data);
       temp=temp->next;
      }
    	
    }	
