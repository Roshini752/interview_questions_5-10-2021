#include <stdio.h>
#include <stdlib.h>
int non_repeating_elements(int arr[], int n)
{
int i,j;
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++) // 1 2 4 3 2 4 5
{
//if(arr[i] == arr[j] && i != j)
if(((arr[i] ^ arr[j])== 0 ) && (i ^ j) != 0)
break;
}
if(j == n )
{
printf("\nNon-repeating element is %d",arr[i]);
}
}
return 0;
}
int main()
{
int n,i;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
int arr[n];
printf("\nInput the array elements : ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
non_repeating_elements(arr, n);
return 0;
}