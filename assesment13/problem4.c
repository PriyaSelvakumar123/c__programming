#include <stdio.h>
#include <stdlib.h>

struct student
{
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student* createSampleList();
struct student* insertEntry(struct student *head);
struct student* deleteEntry(struct student *head);
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
        printf("2. Delete Entry\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = insertEntry(head);
            break;
        case 2:
            head = deleteEntry(head);
            break;
        case 3:
            displayList(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

struct student* createSampleList()
{
    struct student *s1, *s2, *s3, *s4, *s5;

    s1 = malloc(sizeof(struct student));
    s2 = malloc(sizeof(struct student));
    s3 = malloc(sizeof(struct student));
    s4 = malloc(sizeof(struct student));
    s5 = malloc(sizeof(struct student));

    s1->id = 1; s1->Maths = 80; s1->Science = 85;
    s2->id = 2; s2->Maths = 70; s2->Science = 75;
    s3->id = 3; s3->Maths = 90; s3->Science = 95;
    s4->id = 4; s4->Maths = 60; s4->Science = 65;
    s5->id = 5; s5->Maths = 88; s5->Science = 82;

    s1->prev = NULL; s1->next = s2;
    s2->prev = s1;   s2->next = s3;
    s3->prev = s2;   s3->next = s4;
    s4->prev = s3;   s4->next = s5;
    s5->prev = s4;   s5->next = NULL;

    return s1;
}

struct student* insertEntry(struct student *head)
{
    struct student *newnode, *temp = head;
    int key, option;

    newnode = malloc(sizeof(struct student));

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
        temp = temp->next;

    if (temp == NULL)
    {
        printf("ID not found\n");
        free(newnode);
        return head;
    }

    if (option == 1)   // Before
    {
        newnode->next = temp;
        newnode->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = newnode;
        else
            head = newnode;

        temp->prev = newnode;
    }
    else if (option == 2)  // After
    {
        newnode->prev = temp;
        newnode->next = temp->next;

        if (temp->next != NULL)
            temp->next->prev = newnode;

        temp->next = newnode;
    }
    else
    {
        printf("Invalid option\n");
        free(newnode);
    }

    return head;
}

struct student* deleteEntry(struct student *head)
{
    struct student *temp = head;
    int key;

    printf("Enter ID to delete: ");
    scanf("%d", &key);

    while (temp != NULL && temp->id != key)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("ID not found\n");
        return head;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
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

    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
