// Iterative C program to reverse a linked list
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct node {
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* last = NULL;
/* Function to reverse the linked list */
void reverse(struct node** head)
{
	struct node* prevnode = NULL;
	struct node* currentnode = *head;
	struct node* nextnode = *head;
	while (nextnode != NULL) {
		// Store next
		nextnode = nextnode->next;

		// Reverse current node's pointer
		currentnode->next = prevnode;

		// Move pointers one position ahead.
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;
}

/* Function to push a node */
void create(struct node** head, int ele)
{
	struct node* new
		= (struct node*)malloc(sizeof(struct node));
        if((*head)==NULL)
        {
            new->data = ele;
            new -> next = NULL;
            (*head)=last=new;
        }
           else{
               
          
                    new->data=ele;
	                new->next=NULL;
	                last->next=new;
	                last=new;
           }
        
}

/* Function to print linked list */
void display(struct node* head)
{
	struct node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	

	create(&head, 20);
	create(&head, 4);
	create(&head, 15);
	create(&head, 85);

	printf("Given linked list\n");
	display(head);
	reverse(&head);
	printf("\nReversed Linked list \n");
	display(head);
	
}



