#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node *head;

void insertNode(int data)
{
	
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = data;
    if(head==NULL)
    {
        head = temp1;
        temp1->next=NULL;
    }
    struct Node* temp2=head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }    
    temp2->next= temp1;
    temp1->next = NULL;

}

void reverseList()
{
    struct Node *prev,*current,*next;
    current=head;
    prev =NULL;
    while(current!=NULL)
    {
        next= current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void printData()
{
		struct Node* temp = head;
		while(temp!=NULL)
		{
			printf("%d\n", temp->data);
			temp= temp->next;
		}
		printf("\n");
} 

int main(void)
{
  
	head = NULL;
	
	insertNode(9);
	insertNode(5);
	insertNode(7);

    reverseList();
	printData();
	return 0;
}
