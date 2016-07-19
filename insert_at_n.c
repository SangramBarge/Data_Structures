#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void insertNode(int data,int n)
{
	int i;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
	temp1->data = data;
	temp1->next = NULL;
	if(n==1)
	{
			temp1->next= head;
			head =temp1;
			return;
	}

	struct Node* temp2 =head; //old node just for traversing
	
	for(i=0;i<n-2;i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

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
	
	insertNode(9,1);
	insertNode(5,2);
	insertNode(7,3);
	insertNode(8,4);
	insertNode(12,5);
	insertNode(14,1);

	printData();
	return 0;
}
