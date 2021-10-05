#include<stdio.h>
 int fun();
 extern int a;                 //internal linking using extern
 static int b=90;                //internal using static globally 
 //auto int a=9;   // we cant declare globally    
 int main()
 {
    register int b=10;
    //printf("%p",&b);       //it throws error b/c we can't print the address of register
     {
     auto int a=200;         //it will work for this scope only
     //printf("%d\n",a);
     }
     printf("intanal linking of extern = %d\n",a);       //it will through error if we remove extern int a__undeclared element 
     fun();
     fun();
 }
 int a=10;
 
 int fun()
 {
     static int i=10;
     int j=10;
     //int b=67;
     i++; 
     j++;                   //it won't update if we dont use static key word 
     printf("i=%d\n",i);      //11 12
     printf("j=%d\n",j);      //10 10
     {
       
       printf("b=%d\n",b); //90 91
       b++;    //11 11
     }
     
 }
 