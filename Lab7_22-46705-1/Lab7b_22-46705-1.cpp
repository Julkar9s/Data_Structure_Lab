#include<bits/stdc++.h>
using namespace std;

class CirculerQueue{

private:
    int rear,front;
    int arr[5];

public:
    CirculerQueue(){
        rear = -1;
        front = -1;
        for(int i = 0; i<5; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    bool isFull(){
        if((rear+1)%5 == front)
            return true;
        else
            return false;
    }

    void enqueue(int value){
        if(isFull())
            cout<<"Queue Overflow\n";
        else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = value;
            cout<<"enqueue done\n";
        }
        else{
            rear = (rear+1)%5;
            arr[rear] = value;
            cout<<"enqueue done\n";
        }
    }

    void dequeue(){
        if(isEmpty())
            cout<<"Queue Underflow\n";
        else if(rear == front){
            rear = -1;
            front = -1;
            cout<<"dequeue done\n";
        }
        else{
            arr[front] = 0;
            front = (front+1)%5;
            cout<<"dequeue done\n";
        }
    }

    void display(){
        for(int i = 0; i<5; i++){
            cout<<arr[i]<<" ";
        }
    }

    int showFront(){
        if(isEmpty())
            cout<<"Queue is Empty\n";
        else
            return arr[front];
    }


};

int main()
{
    CirculerQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.display();
    cout<<"Front element : "<<q.showFront()<<endl;
    q.dequeue();
    q.dequeue();
    q.display();
    cout<<"Front element : "<<q.showFront()<<endl;
    q.enqueue(6);
    q.display();

}
