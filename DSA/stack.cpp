#include<iostream>
using namespace std;
int st[10], i, n, c, top=-1, item;
void push()
{
  if(top==n-1)
    cout<<"Overflow"<<endl;
  else 
  {
    cout<<"Enter the element to insert in the stack"<<endl;
    cin>>item;
    top=top+1;
    st[top]=item;
  }
}
void pop()
{
  if(top==-1)
    cout<<"Underflow"<<endl;
  else
   top=top-1;
}
void display()
{
  if(top==-1)
    cout<<"Empty Stack"<<endl;
  else 
  {
    for(i=top;i>=0;i--)
      cout<<st[i]<<endl;
  }
}
int main()
{
  cout<<"Enter number of elements:"<<endl;
  cin>>n; 
  while(1)
  {
    cout<<"Enter choice:\n1. Push\n2. Pop\n3. Display\n4. Exit"<<endl;
    cin>>c;
    switch (c) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(1);
    }
  }
}
