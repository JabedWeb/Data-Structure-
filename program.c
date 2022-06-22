#include<stdio.h>
int main()
{
    int c=0,s,x;
    scanf("%d%d",&s,&x);
    while(s){
        s/=x;
        c++;
        }
    printf("%d",c);
    return 0;
}