#include <iostream>
using namespace std;
const int MAX = 40;
int queue_arr[MAX], front=-1, rear=-1, ele;
void insert()
{
 if (rear == MAX - 1) {
        cout << "Queue Overflow" << endl;
    } else {
      if (front == -1) {
          front = 0;
      }
      cout << "Enter the value of the new item: ";
      cin >> ele;
      rear = rear + 1;
      queue_arr[rear] = ele;
  } 
}
void del()
{
  if(front==-1||front>rear)
    cout<<"Queue Underflow"<<endl;
  else 
  {
    cout<<"Element deleted= "<<queue_arr[front]<<endl;
    front=front+1;
  }
}
void show()
{
  int i;
  cout<<"F="<<front<<"R="<<rear<<endl;
  if(front==-1||front>rear)
    cout<<"Queue is Empty"<<endl;
  else 
  {
    cout<<"Required queue is:"<<endl;
    for(i=front;i<=rear;i++)
        cout<<queue_arr[i]<<endl;
  }
}
int main()
{
int c;
while(1){
cout<<"Enter your choice\n1. Enquque\n2. Dequeue\n3. Display\n4. Exit"<<endl;
cin>>c;
switch (c) {
  case 1:
    insert();
    break;
  case 2:
    del();
    break;
  case 3:
    show();
    break;
  case 4:
    exit(1);}
}
}
