#include<stdio.h>

int main(){
    int *a=5;
    int *n=&a;
    printf("%d\n",*n);
    printf("%d\n",n);
    printf("%d\n",&a);

}