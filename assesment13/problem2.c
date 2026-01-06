#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student* createSampleList();
struct student* insertEntry(struct student *head);
void displayList(struct student *head);
int main()
{
    struct student *head = NULL;
    int choice;

    head = createSampleList();

    while (1)
    {
        printf("\nMENU\n");
        printf("1. Insert Entry\n");
        printf("2. Display List\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = insertEntry(head);
            break;
        case 2:
            displayList(head);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}
struct student* createSampleList()
{
    struct student *s1, *s2, *s3;

    s1 = (struct student*)malloc(sizeof(struct student));
    s2 = (struct student*)malloc(sizeof(struct student));
    s3 = (struct student*)malloc(sizeof(struct student));

    s1->id = 1; s1->Maths = 80; s1->Science = 85;
    s2->id = 2; s2->Maths = 75; s2->Science = 70;
    s3->id = 3; s3->Maths = 90; s3->Science = 95;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    return s1;  
}
struct student* insertEntry(struct student *head)
{
    struct student *newnode, *temp = head, *prev = NULL;
    int key, option;

    newnode = (struct student*)malloc(sizeof(struct student));

    printf("Enter new ID: ");
    scanf("%d", &newnode->id);
    printf("Enter Maths marks: ");
    scanf("%d", &newnode->Maths);
    printf("Enter Science marks: ");
    scanf("%d", &newnode->Science);
    printf("Enter reference ID: ");
    scanf("%d", &key);
    printf("1. Insert Before\n2. Insert After\nEnter option: ");
    scanf("%d", &option);
    while (temp != NULL && temp->id != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("ID not found\n");
        free(newnode);
        return head;
    }
    if (option == 1)  
    {
        if (temp == head)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            prev->next = newnode;
            newnode->next = temp;
        }
    }
    else if (option == 2) 
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else
    {
        printf("Invalid option\n");
        free(newnode);
    }

    return head;
}

void displayList(struct student *head)
{
    struct student *temp = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("\nStudent List:\n");
    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
