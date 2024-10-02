#include <iostream>
using namespace std; 
struct node 
{
  int info;
  struct node *next;
};
struct node *head=NULL;
int main()
{
  int data,c;
  struct node *ptr;
  while(1)
  {
    cout<< "Enter your choices:\n1. Beginning\n2. At the End\n3. At a given location\n4. Exit" <<endl; 
    cin>>c;
    switch (c) 
    {
      case 1:
        {
          ptr=(struct node *)malloc(sizeof(struct node *));
          if(ptr==NULL)
            cout <<"Overflow"<<endl;
          if(head==NULL)
          {
            cout<<"Enter the value\n";
            cin>>data;
            ptr->info=data;
            ptr->next=NULL;
            head=ptr;
          }
          else 
          {
            cout<<"Enter the value\n";
            cin>>data;
            ptr->info=data;
            ptr->next=head;
            head=ptr; 
          }
        }
      break;
      case 2: 
        {
          struct node *ptr, *new_node;
          new_node=(struct node *)malloc(sizeof(struct node));
          if(new_node==NULL)
            cout<<"Overflow"<<endl;
          cout<<"Enter the Value:"<<endl;
          cin>>data;
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
          int loc, i, count=0;
          struct node *new_node, *temp, *ptr;
          new_node=(struct node *)malloc(sizeof(struct node *));
          if(new_node==NULL)
            cout<<"Overflow"<<endl;
          if(head==NULL)
          {
            cout<<"List is empty"<<endl; 
            break;
          }
          ptr=head;
          cout<<"Enter the Location:"<<endl;
          cin>>loc;
          while(ptr!=NULL)
          {
            ptr=ptr->next;
            count++;
          }
          if(loc<=count)
          {
            cout<<"Enter the Value"<<endl;
            cin>>data;
            new_node->info=data;
            temp=head;
            ptr=head;
            for(i=0;i<loc;i++)
              ptr=ptr->next;
            for(i=0;i<loc;i++)
              temp=temp->next;
            temp->next=new_node;
            new_node->next=ptr;
          }
          else 
          {
            
          }
        }
    }
    if(c==4)
      exit(1);
  }
}
