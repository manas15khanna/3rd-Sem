#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  
int main ()  
{
    int choice=0;
    while(choice!=7)
    {
        cout<<"\nChoose one option from the following list ..."<<endl;
        cout<<"\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.Show\n7.Exit"<<endl;
        cout<<"\nEnter your choice?"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: beginsert();    break;
            case 2: lastinsert();   break;
            case 3: begin_delete(); break;
            case 4: last_delete();  break;
            case 5: search();       break;
            case 6: display();      break;
            case 7: exit(0);        break;
            default: cout<<"Enter your choice:"<<endl;
        }
    }
}
void beginsert()
{
    struct node *ptr, *temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        cout<<"Enter Node Data:"<<endl;
        cin>>item;
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
                temp=temp->next;
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        cout<<"\n Node Inserted"<<endl;
    }
}
void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        cout<<"Enter data:"<<endl;
        cin>>item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
                temp=temp->next;
            temp->next=ptr;
            ptr->next=head;
        }
        cout<<"Node Inserted"<<endl;
    }
}
void begin_delete() {
    struct node *ptr;
    if (head == NULL) {
        cout << "Underflow" << endl;
    } else if (head->next == head) {
        delete head;
        head = NULL;
        cout << "\n Node Deleted" << endl;
    } else {
        ptr = head;
        while (ptr->next != head) 
            ptr = ptr->next;
        ptr->next = head->next;   
        delete head;               
        head = ptr->next;          
        cout << "\n Node Deleted" << endl;
    }
}

void last_delete() {
    struct node *ptr, *preptr;
    if (head == NULL) {
        cout << "\n Underflow" << endl;
    } else if (head->next == head) {
        delete head;
        head = NULL;
        cout << "\n Node deleted" << endl;
    } else {
        ptr = head;
        while (ptr->next != head) {
            preptr = ptr; 
            ptr = ptr->next;
        }
        preptr->next = head;
        delete ptr; 
        cout << "\n Node deleted" << endl;
    }
}
void search()
{
    struct node *ptr;
    int item, i=0, flag=1;
    ptr=head;
    if(ptr==NULL)
    {
        cout<<"\n Empty List"<<endl;
    }
    else
    {
        cout<<"Enter item which you want to search?"<<endl;
        cin>>item;
        if(head->data==item)
        {
            cout<<"Item found at location"<<i+1;
            flag=0;
        }
        else
        {
            while(ptr->next!=head)
            {
                if(ptr->next!=head)
                {
                    cout<<"Item fouind at location:"<<i+1;
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
                i++;
                ptr=ptr->next;
            }
        }
        if(flag!=0)
            cout<<"Item Not Found"<<endl;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
        cout<<"\n Nothing to Print"<<endl;
    else
    {
        cout<<"Printing Values"<<endl;
        while(ptr->next!=head)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        cout<<ptr->data<<endl;
    }
}
