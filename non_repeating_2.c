#include <stdio.h>
// if the single value is repeated even times and the non repeating value is only one
int main()
{
int n,i,xor=0; // 1 1 2 2 2 2  4 5 5 6 6
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
//0100
//0101 - 0001 ^ 0101 - 0100 ^ 0110 - 0010 ^ 0110 - 0100 - 4 
printf("\nInput the array elements : ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    xor = xor ^ arr[i];// 4
}
printf("non repeating value is %d",xor);
return 0;
}