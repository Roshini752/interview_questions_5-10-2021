#include<stdio.h>
#include"extern_fun.c"
 extern int fun();
 extern int a;                 //internal linking using extern
 static int b=90;                //internal using static        
 int main()
 {
     register int b=10;
    //printf("%lu",&b);       //it throws error b/c we can't print the address of register
     {
     auto int a=200;         //it will work for this scope only
     printf("%d\n",a);
     }
     printf("%d\n",a);       //it will through error if we remove extern int a__undeclared element 
     fun();
     fun();
 }
 int a=10;
 
 /*int fun()
 {
     static int i=10;
     int j=10;
     int b=67;
     i++;                    //it won't update if we dont use static key word 
     printf("i=%d\n",i);      //11 12
     printf("j=%d\n",j);      //10 10
     {
       
       printf("b=%d\n",b); 
       b++;    //11 11
     }
     
 }*/
 