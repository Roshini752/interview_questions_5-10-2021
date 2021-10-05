#include <stdio.h>
// array size should be even and the no. of non repeating elements shold be two 
// repeated elemnt frequency even times
int main()
{
int n,i,xor=0;
int x=0,y=0;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements : ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    xor = xor ^ arr[i];
}
int setbit = xor & ~(xor-1);
for(i=0;i<n;i++)
{
    if(arr[i] & setbit)
        x = x ^ arr[i];
    else
        y = y ^ arr[i];
}
printf("non repeating values are %d , %d",x,y);
return 0;
}