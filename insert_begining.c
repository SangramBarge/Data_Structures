#include<stdio.h>
struct Node
{
 int data;
 struct Node* next;
};
struct Node* head;

void insertdata(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void printdata()
{
	struct Node* temp = head;
	while(temp !=NULL)
	{
		printf("%d\n",temp->data );
		temp= temp->next;

	}
	printf("\n");
}

int main(void)
{
	int i,x,n;
	head =NULL;
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
    	scanf("%d",&x);
    	insertdata(x);
        printdata();
	}
}

