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

void add();
void removeEntry();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\nMENU\n");
        printf("1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            removeEntry();
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

void add()
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

    printf("Added successfully\n");
}

void removeEntry()
{
    struct student *temp = top, *prev = NULL;

    if (top == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    if (top->next == NULL)
    {
        printf("Removed Data:\n");
        printf("ID: %d  Maths: %d  Science: %d\n",
               top->id, top->Maths, top->Science);
        free(top);
        top = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    printf("Removed Data:\n");
    printf("ID: %d  Maths: %d  Science: %d\n",
           temp->id, temp->Maths, temp->Science);

    free(temp);
}

void display()
{
    struct student *temp = top;

    if (top == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue (Top to Bottom):\n");
    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
