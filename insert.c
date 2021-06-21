 // insertion
 #include<stdio.h>
 #include<conio.h>
     int main(){
     int ar2[20], t,i1,key1,pos1,n1,b,d;
      printf(" enter the no. of integers in the ARRAY\n");
   scanf("%d",&t); 
   for ( i1=0; i1<t; i1++)
   { scanf("%d",&ar2[i1]);
                        }    

    printf("enter the element and position you want to insert \n");
    scanf("%d, %d" , &key1,&pos1);
     
     for (b=pos1; b<n1+1; b++){
      ar2[b]=ar2[b+1];   
}
     ar2[pos1]=key1;
    printf(" array after insertion \n");
    for ( d=0; d<n1+1; d++)
   { printf("%d  ",ar2[d]);
                        }

       
         return 0;
     }
