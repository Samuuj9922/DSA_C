#include<stdio.h>

int stack[5];
int top= -1;

void push(int value)
{
    if(top == 5-1)
    {
        printf("Stack Overflow! Cannot Push %d\n",value);
    }
    else
    {
        top++;
        stack[top]= value;
        printf("%d Pushed to stack \n" ,value);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow! Cannot Pop %d\n");
    }
    else
    {
        int value = stack[top];
        top--;
        printf("%d Popped from stack \n" ,value);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements:");
    
        int i;
        for(i = 0 ;i<=top ;i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    display();
    pop();
    pop();
    return 0;
}