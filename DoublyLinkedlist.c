#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;

void insertion_begining();
void display();

int main()
{
    int choice=0;
    while(choice !=4)
    {
        printf("\n Main Menu");
        printf("\nChoose One Option From The Following\n");
        printf("\n 1. Insert at Begining \n 2.Show\n 3.Exit\n");
        printf("\n Enter Your Choice:");
        scanf("\n%d",&choice);

        switch(choice)
        {
            case 1:
                 insertion_begining();
                 break;

             case 2:
                  display();
                  break;
                  
              case 3:
                   exit(0);
                   break;
               
              default:
                    printf("Enter the valid Choice.."); 
        }
    }
    return 0;
}

void insertion_begining()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node ));

    if(ptr == NULL)
    {
        printf("\n OVERFLOW");
    }

    else
    {
        printf("\n Enter Element  Value:");
        scanf("%d" , &item);
        if(head == NULL)
        {
            ptr->next=NULL;
            ptr->prev= NULL;
            ptr->data=item;
            head=ptr;
        }

        else{

        ptr->data = item;
        ptr->prev= NULL;
        ptr->next = head;
        head -> prev = ptr;
        head = ptr;
        

    }
    printf("Item Inserted");
        
    }

}

void display()
{
    struct node *ptr;

    ptr = head;

    if(ptr == NULL)
    {
        printf("Nothing to print\n");
    }
    else
    {
         printf("\n Printing values\n");
         while(ptr !=  NULL)
         {
            printf("%d\n",ptr->data);
            ptr = ptr->next;
         }
    }
}