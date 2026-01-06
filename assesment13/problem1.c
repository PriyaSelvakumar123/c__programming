#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main()
{
    struct student *head = NULL, *temp = NULL, *newnode;
    int id;

    while (1)
    {
        printf("Enter ID (-1 to stop): ");
        scanf("%d", &id);

        if (id == -1)
            break;

        newnode = (struct student *)malloc(sizeof(struct student));

        newnode->id = id;

        printf("Enter Maths marks: ");
        scanf("%d", &newnode->Maths);

        printf("Enter Science marks: ");
        scanf("%d", &newnode->Science);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
      printf("\nStudent Records:\n");
    temp = head;

    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
