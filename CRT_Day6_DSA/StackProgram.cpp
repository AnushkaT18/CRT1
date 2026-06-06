#include<iostream>
using namespace std;
class Stack
{

    private:
       int size;
       int top;
       int *arr;

    public:
        Stack(int s)//constructor is automatically when object is created
        {
            size = s;
            arr = new int[size];
            top = -1;
        }
        //it check the stack is empty or not
        bool isEmpty()
        {
            return top == -1;
        }
        //check stack is full or not
        bool isFull()
        {
            return top == size-1;
        }
        //push operation->(void)null datatype
        void push(int value)
        {
            if(isFull())
            {
                cout<<"Stack is full"<<endl;
                return;
            }
            arr[++top] = value;
            cout<<"arr[top] Element has pushed"<<endl;

        }
        //display stack
        void display()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return;
            }
            for(int i=top; i>=0; i--)
            {
                cout<<"["<<arr[i]<<"]"<<endl;
            }
        }
        //Pop operation
        void pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
                return;
            }
            cout<<arr[top--]<<endl;
        }
        //peek operation
        void peek()
        {
            if(isEmpty())
            {
                cout<<"stack is empty"<<endl;
                return;
            }
            cout<<"Top element="<<arr[top]<<endl;
        }
        //delete stack
        void deleteStack()
{
    top = -1;
    cout<<"Stack deleted successfully"<<endl;
}


};
int main()
{
    Stack st(5);//stack size=5
    cout<<"Stack has created"<<endl;
    while(true)
    {
        int choice;
        int val;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.delete"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Enter the element for push"<<endl;
            cin>>val;
            st.push(val);
        }
        else if(choice ==2)
        {
            st.pop();
        }
        else if(choice==3)
        {
            st.display();
        }
        else if(choice ==4)
        {
            st.peek();
        }
        else if(choice == 5)
        {
            st.deleteStack();
        }
        else
        {
            break;
        }
    }
}
