#include<stdio.h>
void mergeshort(int arr[ ],int lb,int ub);
void merge(int arr[ ],int lb,int mid,int ub);
void print(int *arr,int N);



int main()
{
   int N;
   printf("please enter the size : ");
   scanf("%d",&N);
   int arr[N];
   for(int i=0;i<N;i++)
   {
       scanf("%d",&arr[i]);
   }
   int lb=0;
   int ub=N-1;
   mergeshort(arr,lb,ub);
   print(arr,N);
   
   return 0;
    
}
void mergeshort(int arr[ ],int lb,int ub)
{  
  int mid;


    if(lb<ub)
    {
       mid=(lb+ub)/2;
        mergeshort(arr,lb,mid);
        mergeshort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }

}
void print(int *arr,int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
}
void merge(int arr[ ],int lb,int mid,int ub)
{
    
    int b[50];
    int i=lb;
    int j=mid+1;
    int  k=lb;
    
    while(i<=mid && j<=ub)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            
        }
        
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    }
        
        
            while(i<=mid)
            {
                  b[k]=arr[i];
             k++;
             i++;
            }
            while(j<=ub)
            {
                b[k]=arr[j];
                k++;
                j++;
            }
        for(k=lb;k<=ub;k++)
        {
         arr[k]=b[k];
         
        }
        
}