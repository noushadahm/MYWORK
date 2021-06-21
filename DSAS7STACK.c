    #include <stdio.h>  
    #include <stdlib.h>  
    void push();  
    void pop();  
    void display();  
    void peek();
    struct node   
    {  
    int val;  
    struct node *next;  
    };  
    struct node *head;  
      
    void main ()  
    {  
        int choice=0;     
        printf("\n*********STACK USING LINKED LIST*********\n");  
        printf("\n");  
        while(choice != 5)  
        {  
            printf("\n\nChose one from the below options...\n");  
            printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");  
            printf("\n Enter your choice \n");        
            scanf("%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                {   
                    push();  
                    break;  
                }  
                case 2:  
                {  
                    pop();  
                    break;  
                }  
                
                case 3:
                	{
                	  peek();
	  break;	
	     }
                case 4:  
                {  
                    display();  
                    break;  
                }  
                case 5:   
                {  
                    printf("Exiting....");  
                    break;   
                }  
                default:  
                {  
                    printf("Please Enter valid choice ");  
                }   
        };  
    }  
    }  
    void push ()  
    {  
        int val;  
        struct node *ptr = (struct node*)malloc(sizeof(struct node));   
        if(ptr == NULL)  
        {  
            printf("not able to push the element");   
        }  
        else   
        {  
            printf("Enter the value \n");  
            scanf("%d",&val);  
            if(head==NULL)  
            {         
                ptr->val = val;  
                ptr -> next = NULL;  
                head=ptr;  
            }   
            else   
            {  
                ptr->val = val;  
                ptr->next = head;  
                head=ptr;  
                   
            }  
            
              
        }  
    }  
      
    void pop()  
    {  
        int item;  
        struct node *ptr;  
        if (head == NULL)  
        {  
            printf("stack is empty\n");  
        }  
        else  
        {  
            item = head->val;  
            ptr = head;  
            head = head->next;  
            free(ptr);  
            printf("%d",item);  
            printf(" is popped");
              
        }  
}
        
      void peek()
      {
         int item;  
        struct node *ptr;  
        if (head == NULL)  
        {  
            printf("stack is empty\n");  
        }  
        else  
        {  
            item = head->val;  
            
            
            printf(" the top element is ");
            printf("%d",item);  
            
              
      	
        }  }
        
     
    void display()  
    {  
        int i;  
        struct node *ptr;  
        ptr=head;  
        if(ptr == NULL)  
        {  
            printf("Stack is empty\n");  
        }  
        else  
        {  
            printf("elements in the stack are \n");  
            while(ptr!=NULL)  
            {  
                printf("%d\n",ptr->val);  
                ptr = ptr->next;  
            }  
        }  
    }  
