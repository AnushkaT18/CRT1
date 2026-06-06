#include<iostream>
using namespace std;

class Queue
{
private://declaration of data member
    int *arr;
    int front;
    int rear;
    int capacity;

public://initiazation
    Queue(int size)//constructor
    {
        capacity = size;//5
        arr = new int[capacity];//size=capacity
        front = 0;
        rear = -1;
    }
    bool isEmpty()
    {
        return rear < front;
    }
    bool isFull()
    {
        return rear == capacity -1;
    }
    void enqueue(int value)//enqueue -> add element in the queue
    {
        if(isFull())
        {
            cout<<"Queue Overflow! Cannot Insert"<<value<<endl;
            return;
        }
        arr[++rear]=value;
        cout<<value<<"insert into queue"<<endl;

    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue Underflow! Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<"removed from queue"<<endl;
        front++;
    }
    void deQueue()
    {
        if(isEmpty())
        {
             cout<<"Queue is empty"<<endl;
             return;
        }
        cout<<"Front Value"<<arr[front];
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue: "<<endl;
        for(int i =  front; i <= rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }
    void peek()
    {
        if(front == -1)

            cout << "Queue is empty";
        else
            cout<<"front element = "<<arr[front];
    }
    void deleteQueue()
    {
        front = -1;
        rear = -1;
        cout<<"queue deleted successfully";
    }


};

int main()
{
    Queue obj(5);
    cout<<"Queue has created"<<endl;
    while(true)
    {
        int choice;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. display"<<endl;
        cout<<"3. dequeue"<<endl;
        cout<<"4. peek"<<endl;
        cout<<"5. delete queue"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            int val;
            cout<<"Enter the element to add in queue"<<endl;
            cin>>val;
            obj.enqueue(val);
        }
        else if(choice ==2)
        {
            obj.display();
        }
        else if(choice==3)
        {
            obj.deQueue();
        }
        else if(choice ==4)
        {
            obj.peek();
        }
        else if(choice == 5)
        {
            obj.deleteQueue();
        }
        else
        {
            break;
        }
    }

}
