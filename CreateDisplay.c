#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int info;
	struct node  *next;
};
struct node *head=NULL;
void create (struct node *ptr);
void display(struct node *ptr);

int main()
{ 

int ch;

   	while(1)
   	{
   		printf("\nPress 1:Create  2: display  0:exit\n");
   		printf("Enter your choice:");
        scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:create(head);break;
   		case 2:display(head);break;	
   		case 0:exit(0);break;
   		default: printf("Wrong choice ...Press only 0,1,2");
	   }
    }
	return 0;
}

void create (struct node *ptr)
{
	struct node *temp;
	int data;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter info:");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
		  ptr=ptr->next; 	
		}
		  ptr->next=temp;
	}
	
	
}

void display(struct node *ptr)
{
   ptr=head;
   while(ptr!=NULL)
   {
     printf("%d  ",ptr->info);	
     ptr=ptr->next;
   }
   
   
}


