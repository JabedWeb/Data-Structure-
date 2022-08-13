//its a final linked list where we can insert data first and last 

#include<stdio.h>
#include<stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

struct Node *head;

void insertFirst(int value) {
struct Node *newNode;
newNode =(struct Node*) malloc(sizeof(struct Node));
newNode->data=value;
if(head==NULL) {

    newNode->next=NULL;
    head=newNode;
}
else{
    newNode->next=head;
    head=newNode;
}
}

//insert End
void insertEnd(int value) {
struct Node *newNode;
newNode =(struct Node*) malloc(sizeof(struct Node));
newNode->data=value;
newNode->next=NULL;
if(head==NULL) {
    head=newNode;
}
else{
    struct Node *temp=head;
    while(temp->next!=NULL) {
      temp= temp->next;
    }
    temp->next=newNode;
}
}

//display
void display() {
if(head==NULL) {
    printf("empty");
}
else {
    struct Node *temp=head;
    while (temp->next!=NULL) {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    printf("%d \n",temp->data);
}

}


int main(){

    int choice,value,target;

    while(1) {
            mainmenu :
            printf("1---insert \n 2---display \n  3-----exits \n");
            scanf("%d",&choice);
                switch (choice) {
                   case 1:
                       printf("insert value\n");
                       scanf("%d",&value);

                    while(1){
                    printf("1---insertatFirst \n 2---insertEnd \n");
                    scanf("%d",&target);
                    switch(target){
                     case 1 :
                      insertFirst(value);
                       break;

                       case 2 :
                      insertEnd(value);
                       break;
                       default :
                        goto mainmenu;
                    }
                    goto submenu ;
                   }
                   submenu :
                       case 2 :
                        display();
                        break;
                        case 3 :
                        exit(0);
        }
    }

}