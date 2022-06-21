/* C program to insert an element in an array */
#include <stdio.h>
int main()
{
int n;
printf("How many array do you want: \n");
scanf("%d",&n);

printf("please type %d array",n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}

printf("which position do you want to insert: \n");
int pos;
scanf("%d",&pos);

printf("type inserted number \n");

int ele;
scanf("%d",&ele);
if(pos > n)
printf("Invalid Input");
else
{
   for (i = n-1; i >= pos-1; i--)
   arr[i+1] = arr[i];

   arr[pos-1] = ele;

   printf("Array after insertion is:\n");

   for (i = 0; i <= n; i++)
   printf("%d\n", arr[i]);
}

return 0;
}