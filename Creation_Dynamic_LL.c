#include<stdio.h>
#include<stdlib.h> 

struct Node {
    int data ;
    struct Node * next ;
} ;

void LLtrav(struct Node * ptr) ;
void createList(int n) ;

int main() {
    int n ;
    printf("How many Nodes You Want ? : ");
    scanf("%d",&n) ;
    createList(n) ;
}

void createList(int n)
{
    struct Node *newNode, *temp;
    int data, i;
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
    LLtrav(head) ;
}

void LLtrav(struct Node * ptr) {
    int i=1 ;
    while(ptr!=NULL) {
        printf("The Data of Node %d is :%d \t",i,ptr->data) ;
        printf("The Address of Next Node is: %u \n",ptr->next) ;
        i++ ;
        ptr=ptr->next ;
    }
}
    
