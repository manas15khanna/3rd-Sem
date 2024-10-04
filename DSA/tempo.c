#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *head=NULL;
main()
{
	int data,c;
	struct node *ptr;
	while(1)
	{
	printf("enter your choice:\n1. Beginning\n2.At the end\n3.At a given location\n4.Display\n5.Search\n6.Deletion in the beginning\n7.Deleting at the end\n8.Deleting at random location\n9.Exit\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1: 
	{
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	printf("overflow");
	if(head==NULL)
	{
		printf("enter the value\n");
		scanf("%d",&data);
		ptr->info=data;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		printf("enter the value\n");
		scanf("%d",&data);
		ptr->info=data;
		ptr->next=head;
		head=ptr;
	}
	}
	break;
	case 2:
	{
	struct node *ptr,*new_node;
	new_node=(struct node *)malloc(sizeof(struct node));
	if(new_node==NULL)
	printf("overflow");
	printf("enter the value\n");
	scanf("%d",&data);
	new_node->info=data;
	new_node->next=NULL;
	ptr=head;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=new_node;
}
	break;
	case 3:
		{
	int loc,i,count=0;
	struct node *new_node,*temp,*ptr;
	new_node=(struct node *)malloc(sizeof(struct node *));
	if(new_node==NULL)
	printf("overflow");
	if(head==NULL)
	{
		printf("List is empty\n");
	break;
}
ptr=head;
printf("enter the location\n");
scanf("%d",&loc);
while(ptr!=NULL)
{
ptr=ptr->next;
count++;
}
if(loc<=count)
	{
	printf("enter the value\n");
	scanf("%d",&data);
	new_node->info=data;
	temp=head;
	ptr=head;
	for(i=0;i<loc;i++)
	ptr=ptr->next;
	for(i=0;i<loc-1;i++)
	temp=temp->next;
	temp->next=new_node;
	new_node->next=ptr;
}
else
{
	printf("invalid location\n");
	break;
}
		}
		break;
	case 4:
	{
	printf("the required linked list is\n");
	printf("H");
	ptr=head;
	while (ptr!=NULL)  
        {  
            printf("-->%d",ptr->info);  
            ptr = ptr -> next;  
        }  
    printf("-->NULL\n");
	}
	break;
	case 5:
	{
		int item,loc,c=0;
		printf("enter the item to find location\n");
		scanf("%d",&item);
		ptr=head;
		while(ptr!=NULL)
		{
			if(item==ptr->info)
			{
			printf("Item location=%d\n",c);
			break;
			}
			else
			{
			ptr=ptr->next;
			c++;}
		}
		if(ptr==NULL)
		printf("item not found\n");
		
		}
		break;
	case 6:
	{
		struct node *ptr;  
		if(head==NULL)
		printf("Linked list is empty\n");
		else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("Only node of the list deleted\n");  
    }  
		else
		{
		ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("Node deleted\n");  
		}
		}
		break;	
	case 7:
		{
		struct node *ptr,*ptrprev;  
		if(head==NULL)
		printf("Linked list is empty\n");
		else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("Only node of the list deleted\n");  
    }  
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
			ptrprev=ptr;
			ptr=ptr->next;
			}
		ptrprev->next = NULL;  
        free(ptr);  
        printf("Deleted Node\n");  
		}
		}
		break;
		case 8:
		{  
		int loc,i,count=0;
	struct node *temp,*ptr,*ptrprev;
   if(head==NULL)
	{
		printf("List is empty\n");
	break;
}
ptr=head;
printf("enter the location\n");
scanf("%d",&loc);
while(ptr!=NULL)
{
ptr=ptr->next;
count++;
}
if(loc==count)
{
	ptr=head;
			while(ptr->next!=NULL)
			{
			ptrprev=ptr;
			ptr=ptr->next;
			}
		ptrprev->next = NULL;  
        free(ptr);  
        printf("Deleted Node\n");
        break;
}
if(loc<count)
	{
	temp=head;
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptrprev=ptr;
	ptr=ptr->next;
}
	for(i=0;i<loc-2;i++)
	temp=temp->next;
	temp->next=ptr;
	free(ptrprev);
	printf("Deleted Node\n");
        break;
}
else
{
	printf("invalid location\n");
	break;
}
}  	
break;
	case 9:
		exit(1);
}

}
}