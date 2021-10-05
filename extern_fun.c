int fun()
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
     
 }
 