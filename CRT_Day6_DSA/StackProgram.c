#include<iostream>
using namespace std;
class stack
{

    private:
       int size;
       int top;
       int *arr;

    public:
        Stack(int s)//constructor calls automatically
        {
            size = s;
            arr = new int[size];
            top = -1;
        }
        //it check the staxck is empty or not
        bool isEmpty()
        {
            return top == -1;
        }
        //check stack is full or not
        bool isFull()
        {
            return top == size-1;
        }
        //push operation->null datatype
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
            for(i = top; i>=0; i--)
            {
                cout<<"["<<arr[top]<<"]"<<endl;
            }
        }

};
int main()
{
    Stack st(5);//stack size=5
    cout<<"Stack has created"<<endl;
    while(true)
    {
        int choice;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Diaplay"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Enter the element for push"<<endl;
            cin>>val;
            st.push(val);
        }
        else if(choice==3)
        {
            st.display();
        }
    }
}
