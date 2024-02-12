#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
    int grade;
    struct node *next;
}
node;

void swap(int *one, int *two);
node *insertTail(node *head, int number, int grade);
node *mergeLink(node *nodeOne, node *nodeTwo);
void sortList(node *head);
void printList(node *head);
void freeNode(node *head);

int main(void)
{
    node *a = NULL;
    node *b = NULL;
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        int number, grade;
        scanf("%d %d", &number, &grade);
        a = insertTail(a, number, grade);
    }
    for (int i = 0; i < M; i++)
    {
        int number, grade;
        scanf("%d %d", &number, &grade);
        b = insertTail(b, number, grade);
    }
    node *newLink = mergeLink(a, b);
    sortList(newLink);
    printList(newLink);
    freeNode(a);
    freeNode(b);
}

node *insertTail(node *head, int number, int grade)
{
    int sizeofNode = sizeof(node);
    node *temp = (node *)malloc(sizeofNode);
    temp->number = number;
    temp->grade = grade;
    temp->next = NULL;
    if (head == NULL)
    {
        return temp;
    }
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return head;
}

node *mergeLink(node *nodeOne, node *nodeTwo)
{
    node *ptr = nodeOne;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = nodeTwo;
    return nodeOne;
}

void swap(int *one, int *two)
{
    int temp;
    temp = *one;
    *one = *two;
    *two = temp;
}

void sortList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    for (node *i = head; i != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->number > j->number)
            {
                swap(&(i->number), &(j->number));
                swap(&(i->grade), &(j->grade));
            }
        }
    }
}

void printList(node *head)
{
    while (head != NULL)
    {
        printf("%d %d\n", head->number, head->grade);
        head = head->next;
    }
}

void freeNode(node *head)
{
    node *temp = NULL;
    while(head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
