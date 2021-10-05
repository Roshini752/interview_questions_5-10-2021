#include<stdio.h>
#include<stdlib.h>
int main()
{
   /* int a=3;
    int *ptr1=NULL;
    printf("%p\n",ptr1);
    //printf("%d\n",*ptr1);//derefrencing null pointer should not be done*/
    

 /*   int a=3;
    int *ptr1=NULL;
    int *ptr2=NULL;
     if(ptr1==ptr2)
    {
    printf("both are null pointer");
    }
    else
    {
    printf("%d\n",ptr1);
     printf("%d\n",ptr2);
    } */ 

     //error handling
    int a=3;
      
    int *ptr1=NULL;
    printf("%p\n",ptr1);
    ptr1 =( int*)malloc(sizeof(int));
    if(ptr1==NULL)
    {
    printf("this is null pointer");
    }
    else
    {
    printf("%p\n",ptr1);
    }  
    
}


// int *ptr;
// ptr =( int*)malloc(sizeof(int)); 
