#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void push();
void pop();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\nMENU\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

void push()
{
    struct student *newnode;
    newnode = malloc(sizeof(struct student));

    printf("Enter ID: ");
    scanf("%d", &newnode->id);
    printf("Enter Maths marks: ");
    scanf("%d", &newnode->Maths);
    printf("Enter Science marks: ");
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Pushed successfully\n");
}

void pop()
{
    struct student *temp;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;
    top = top->next;

    printf("Popped Data:\n");
    printf("ID: %d  Maths: %d  Science: %d\n",
           temp->id, temp->Maths, temp->Science);

    free(temp);
}

void display()
{
    struct student *temp = top;

    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack (Top to Bottom):\n");
    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
