#include <stdio.h>
void insert_element();
void delete_element();

int main()
{
   printf( "Please choose the option:  \n");
   printf("1 for insert \n2 for delete\n");
   int choose;
   scanf("%d",&choose);
   if(choose==1){
    insert_element();
   }
   else if(choose==2){
    delete_element();
   }
   else{
    printf("please choose valid method");
   }
   return 0;
}


//insert elements
void insert_element(){

int n;
printf("How many array elements do you want: \n");
scanf("%d",&n);

printf("please type that %d array\n",n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

printf("which position_change do you want to insert: \n");
int position_change;
scanf("%d",&position_change);

printf("type inserted number \n");

int ele;
scanf("%d",&ele);
if(position_change > n)
    printf("Invalid Input");
else
{
   for (i = n-1; i >= position_change-1; i--)
   arr[i+1] = arr[i];

   arr[position_change-1] = ele;

   printf("Array after insertion is:\n");

   for (i = 0; i <= n; i++)
   printf("%d\n", arr[i]);
}

}
//Delete Element
void delete_element(){
int array[100], position_change, c, n;

printf("How many array elements do you want: \n");
scanf("%d", &n);

printf("please type %d array \n",n);

for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

printf("which position_change do you want to : \n ");
scanf("%d", &position_change);

if (position_change >= n+1)
    printf("Invalid elements.\n");
else
{
    for (c = position_change-1; c < n-1; c++)
    array[c] = array[c+1];

    printf("Array after deletion is: ");

    for (c = 0; c < n-1; c++)
    printf("%d\n", array[c]);
}
    
}
