#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{                         // creating node
 int data ; 
 struct node *next;
 	};
    
    struct node *head=NULL;
     struct node *tail=NULL;
    int size=0; 
     void display();        // declaring each function
     void insert(int);
    void removefirst();
    void removelast();
    void deletedata(int);
    void insertatbegin(int);
    void insertafterdata(int,int);
    
   
  
     	
 	
    int main(){
        int data1, i=0,n,j,k,data2;
        // initially taking the elements in the linked list before operation
        printf("enter the no. of inetgers you want to insert\n");
        scanf("%d", &n);
        while(i<n){
             
             
           scanf("%d",&data1);
            insert(data1);
            i++;
        } 
        
        
      do{
        printf("1. display\n");          //creating the operation option
         printf("2. insert at end\n");
         printf( "3. insert at begin\n");
         printf( "4. insert after data\n");
          printf("5. removefirstelement\n");
           printf("6. remove last\n");
            printf("7. delete any value\n");
             
             
              printf("8.exit\n");
              
               
        
        
        
        scanf("%d", &k);	
        switch(k){                          //using switch for choosing of operation
        
        case 1:
        printf(" elements in the circular linked list are\n");
        
        
        display();
        printf("\n");
        break;
        case 5:
        removefirst();
        printf(" elements after deleting first  element\n");
        display();
        
        printf("\n");
        break;
        case 6:
        removelast();
        printf(" elements after deleting last element\n");
        display();
        printf("\n");
        break;
        case 7:
        printf("enter the no. you want to delete\n");
        scanf("%d", &data1);
        deletedata(data1);
        printf("circular linked list after deleting the chosen data\n");
        display();
        printf("\n");
        break;
       case 3:  printf("enter the no.\n");
          scanf("%d", &data1);
          insertatbegin(data1);
          break;
        
         case 4:  printf("enter the data after which you want and the data\n");
          scanf("%d", &data1);
          scanf("%d", &data2);
          insertafterdata(data1, data2);
          break;
        case 8: goto end;
        case 2: scanf("%d",&data1);
           insert(data1);
           break;
        }
       }while(1);
       end:
        return 0;
        
     	
    }
  
    
    //insert operation
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
     tail->next=head;                            // connecting tail to head
     	
    }
    
    // remove first element operation
    void removefirst(){
     	
     struct node *temp= head;
     if(head==NULL){                // underflow condition
      printf("list is empty\n");	
     }
     else{
     
      head= head->next;
      free(temp);
      tail->next=head;                          //connecting tail to head     
       }
    }
    
    // removelast element
    void removelast(){
     struct node *temp= head;
     if(head==NULL){
      printf("list is empty\n");	// underflow condition
     }
     else{
     
     while(temp->next!=tail){
      temp= temp->next;
     }
     free(tail);
     tail=temp;
     tail->next=head;}                   // connecting tail to head
    }
    
    
    // delete the choosen value operation
    void deletedata(int item){
     struct node*temp=head;
     struct node *current;
     if(head==NULL){
      printf("list is empty\n");	// underflow condition
     }
     else{
     
     while(temp->next->data!=item){
      temp = temp->next;	
     }	
     current = temp->next->next;
     free(temp->next);
     temp->next=current;  }
     
    }
    // insert at beginning
   void insertatbegin(int item){
      struct node *n;	
     n=(struct node*)malloc(sizeof(struct node));
     n->data=item;
    
     
     
     if(size>0){
      tail->next=n;
      n->next=head;	
     }
     if(size==0){
      head=n;
      tail=n;
      size++;	
     }else{
       head=n;
       size++;	
     }
     tail->next=n;                            // connecting tail to head
     	
    }
    
     // display operation
    void display(){
      struct node *temp;	
      temp =head;
      
      if(head==NULL){
      printf("list is empty\n");	// underflow condition
     }
     else{
     
      while(temp!=tail){
       printf("%d ", temp->data);
       temp=temp->next; }
      }
      printf("%d ",tail->data);
    	
    }
    
    // insert after data
    void insertafterdata(int item, int item2){
     struct node *n;	
     n=(struct node*)malloc(sizeof(struct node));
     n->data=item2;
      struct node *temp;	
      temp =head;
     
      if(head==NULL){
      printf("list is empty\n");	// underflow condition
     }
     else{
     
     while(temp->data!=item){
      temp = temp->next;	
     }
     n->next=temp->next;	
     temp->next=n;
       }
     
    }	
    
