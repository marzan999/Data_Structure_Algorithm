//Marzan Islam
//Batch_53rd(1st shift)
//Roll_41
//Data Structures Lab
#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val)
{
    if(top >= n-1)
        cout<<"Stack Overflow";
    else
    {
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top <= -1)
        cout << "Stack Underflow";
    else
    {
        cout << "The popped element is " << stack[top] <<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }

}
int main()
{
    int choice, val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;
    do
    {
        cout<<"Enter choice: ";
        cin >> choice;
        switch(choice)
        {
        case 1:
        {
            cout<<"Enter value to be pushed: ";
            cin>>val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout<<"Exit"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Choice"<<endl;
        }
        }
    }
    while(choice!=4);
    return 0;
}

