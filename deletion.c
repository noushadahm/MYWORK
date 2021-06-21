#include<stdio.h>
 
int main(){
     int ar[20];
    int i,n;
      int key, j, c,pos,a;
   printf(" enter the no. of integers in the ARRAY\n");
   scanf("%d",&n); 
   for (i=0; i<n; i++)
   { scanf("%d",&ar[i]);
                        }
       for ( i=0; i<n; i++)
   { printf("%d  ",ar[i]);
                        }
     
     printf("\n enter the no. you want to delete \n");
     scanf("%d" ,&key);
// deletion
      for(c=0; c<n;c++){
      if(key==ar[c]){
         pos=c;
      
     } }
        for( j=pos; j<n-1; j++)
    {  ar[j]=ar[j+1];  }

    
       printf("\n the array after deleting the element are\n");
       for (a=0; a<n-1; a++)
   { printf("%d  ",ar[a]);
                        }
     return 0;                   
}
 // insertion
     
//      printf(" enter the no. of integers in the ARRAY\n");
//   scanf("%d",&t); 
//   for ( i1=0; i1<t; i1++)
//   { scanf("%d",&ar2[i1]);
//                        }    
//
//    printf("enter the element and position you want to insert \n");
//    scanf("%d, %d " , &key1,&pos1);
//     
//     for (b=pos1; b<n1+1; b++){
//      ar2[b]=ar2[b+1];   
//}
//     ar2[pos1]=key;
//    printf("/n array after insertion /n");
//    for ( d=0; d<n+1; d++)
//   { printf("%d  ",ar2[d]);
//                        }
//
//       
//         return 0;
//     }
    
  
