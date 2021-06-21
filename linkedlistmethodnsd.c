#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 20
#define MAX_LENGTH 66
struct node{                         // creating node
 int data ; 
 struct node *next;
 	};
    int size=0;
    struct node *head=NULL;         // creating head node
     struct node *tail=NULL;        // creating the tail node

// push function to push element in the stack
void push( int item)
{
	struct node *n;	
     n=(struct node*)malloc(sizeof(struct node)); // allocating memory to node
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

int getLastElement()
{
  
    struct node *temp= head;
     
     // iterating the stack to reach last node
     while(temp->next!=NULL){
      temp= temp->next;
     }
    // returning the top element of the node
     return temp->data;	
   }	
	  


// function to pop from stack
void pop()
{   
   struct node *temp= head;
     
     // iterating through the stack to reach the last node
     while(temp->next->next!=NULL){
      temp= temp->next;
     }
    // deleting the last node
     free(temp->next);
     // setting previous node next to null
     temp->next=NULL;
     }



void displayStack()
{
   
    struct node *temp;	
      temp =head;
      
     
     
      while(temp!=NULL){
       printf("%d ", temp->data);
       temp=temp->next; }
      
    	

}

int getNumberOfSpaces(char str[])
{
    int spaces = 0;
    int i = 0;
    while (str[i] == '\t' || str[i] == ' ')
    {
        if (str[i] == '\t')
            spaces = spaces + 4;
        else
            spaces = spaces + 1;
        i++;
    }
    return spaces;
}

int checkIndentation(FILE *file)   // recieving the filepointer in pointer file
{
    char str[MAX_LENGTH];    // creating array of characters for reading from file 
    
    
    int lineNumber = 1;       
    fgets(str, MAX_LENGTH, file);   // fgets function used to read a file line by line 
    // str got first line of the file 
    
    int currentSpaces = getNumberOfSpaces(str);   // passing the str to function to calculate 
                                                  // number of spaces in first line
    
    push( currentSpaces);  // pushing the spaces in the stack
    
    while (fgets(str, MAX_LENGTH, file)!=NULL)      // iterating through the file line by line until it reaches end of file
    {
        lineNumber++;        // increasing the line number after each iterartion
        
        int count = getNumberOfSpaces(str); // getting the spaces in the next line of file
        
        if (count > currentSpaces)       // if spaces in the next line is greater than previous line
        {
            push( count);              // then push the spaces in the stack
            currentSpaces = count;       
        }
        else if (count < currentSpaces)   // if current spaces < than the previous space 
        {
            pop();          // pop the last space and check whether that space is present in the top of stack 
            int prev = getLastElement();
            if (prev!=-1 && prev != count)   // if its not present at top then line is not indented return the line number
            {
                return lineNumber;
                
            }         
                          // if its present then move to next line and perform the operation again and again 
                        // untill it reaches end of file
                        
            currentSpaces = prev;
        }
    }
    return -1;
}

   int main()
{   // creatring the file pointer 
    // file pointer uswd to handle and keep track on the files being accessed
    FILE *filepointer;
    
    char file_name[25];       
    printf("Enter the name of the file you want to check.\n");
   
    scanf("%s", file_name);              //user giving the file name to check indentation
     
     // opening the file in readmode 
     //"r" opens the file in read mode and sets pointer to the first character in the file
     // it returns null if the file doesnot exist
     
    filepointer = fopen(file_name, "r");
    
    
    if (filepointer == NULL)            // if file doesnot exit 
    {
        printf("Error opening file");
    }
    else          // if file exist
    {    
          // passing the filepointer to checkindentation function to perform task on it
          
        int result = checkIndentation(filepointer);
        if (result == -1)
        {
            printf("File is OK ");
        }
        else
        {
	printf("Error at line %d, line is not indented ", result);
        }
    }
}

