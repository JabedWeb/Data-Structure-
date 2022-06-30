#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    scanf("%c",&c);
    fflush(stdin);
    char g;
    scanf("%c",&g);
    fflush(stdin);

   
    if(c>g){
        printf("done");
    }
    else{
        printf("not");
    }

    return 0;
}