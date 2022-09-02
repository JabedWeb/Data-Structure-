#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>

/*
 all insertion function for candidate

*/
struct Node
{
    char name[30];
    struct Node *next;
};

struct Node *head;

void insertFirst(char data[30])
{
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->name,data);
    if(head==NULL)
    {
        newNode->next=NULL;
        head=newNode;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

//insert End
void insertEnd(char data[30])
{
    struct Node *newNode;
    newNode =(struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->name,data);
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        struct Node *temp=head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        temp->next=newNode;
    }
}

//insert at any position

void insertAnyPosition(char data[30],int position)
{
    struct Node *newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    strcpy(newNode->name,data);
    if(position==1)
    {
        newNode->next=head;
        head=newNode;
        return ;
    }
    else
    {
        struct Node *temp=head;
        for(int i=0; i<position-2; i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

//search

void search()
{
    char data[30];
    printf("search the name\n");
    fgets(data,sizeof(data),stdin);
    struct Node *temp=head;
    int count=1;
    while(temp->next!=NULL)
    {
        if(strcmp(temp->name, data) == 0)
        {
            printf("Candidate is found %s in place of %d\n",temp->name,count);
            return;
        }
        temp=temp->next;
        count++;
    }
    //last node check
    if(strcmp(temp->name, data) == 0)
    {
        printf("Candidate is found %s in place of %d \n",temp->name,count);
    }
    else
    {
        printf("Candidate is not found");
    }
}

// sorting

 void sorting()
    {
        struct Node* temp = head;
        int c = 1;
        while(temp->next != NULL)
        {
            temp = temp->next;
            c++;
        }
        temp = head;
        char x[100];
        for(int i=0;i<c;i++)
        {
            temp = head;
            while(temp->next != NULL)
            {
                if(strcmp(temp->name,temp->next->name) > 0)
                {
                    strcpy(x,temp->name);
                    strcpy(temp->name,temp->next->name);
                    strcpy(temp->next->name,x);
                }
                temp = temp->next;
            }
        }
    }
    

//display
void display()
{
    if(head==NULL)
    {
        printf("empty");
    }
    else
    {
        int count=1;
        printf("*********Welcome to the voting system project*********\n\n");
        printf("                        CR election                        \n\n");
        printf("*************************************************************\n");

        struct Node *temp=head;
        while (temp->next!=NULL)
        {
            printf("================   %d.%s ================\n",count,temp->name);
            temp=temp->next;
            count++;
        }
        printf("================   %d.%s ================\n",count,temp->name);
        printf("\n");
    }
}


int main()
{

    int choice,target,position;
    char name[30];

    while(1)
    {
mainmenu :
        printf("1---insert the name of voters \n2---display \n3---search  \n4---sorting \n0-----exits \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("insert student Name\n");
            fflush(stdin);
            fgets(name, sizeof(name), stdin);
            while(1)
            {
                printf("1---insertFirst \n2---insertEnd \n3--insertAnyPosition \n");
                scanf("%d",&target);
                switch(target)
                {
                case 1 :
                    insertFirst(name);
                    goto mainmenu;
                    break;

                case 2 :
                    insertEnd(name);
                    goto mainmenu;
                    break;

                case 3 :
                    printf("please select the position where you can insert the element\n");
                    scanf("%d",&position);
                    insertAnyPosition(name,position);
                    goto mainmenu;
                    break;
                default :
                    goto mainmenu;
                }
            }
        case 2 :
            display();
            break;
        case 3 :
            search();
        case 4 :
            sorting();    
            break;
        case 0 :
            exit(0);
        }
    }

}
