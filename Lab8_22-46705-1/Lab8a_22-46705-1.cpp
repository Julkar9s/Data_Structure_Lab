#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

};

void insertFront(Node **head, int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertBack(Node **head, int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    Node* ptr = *head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;

}

void insertAt(Node *previous, int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = previous->next;
    previous->next = newNode;
}

int searching(Node* head, int index){
    Node* current = head;
    int count = 0;

    while(current != NULL){
        if(count == index)
            return current->data;
        count++;
        current = current->next;
    }
}

void removeFront(Node **head){
    if(*head == NULL)
        cout<<"NO element in List\n";
    else{
        Node* temp = *head;
        *head = temp->next;
        delete temp;
        temp = NULL;
    }
}

void removeLast(Node* head){

    if(head->next== NULL){
        delete head;
        head = NULL;
    }

    else{
        Node* temp1 = head;
        Node* temp2 = head;
        while(temp1->next != NULL){
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = NULL;
        delete temp1;
        temp1 = NULL;
    }
}

void removeFrom(Node **head, int value){
    Node* temp = *head;
    Node* prev = NULL;
    if(temp != NULL && temp->data == value){
        *head = temp->next;
        delete temp;
        return;
    }
    else{
        while(temp != NULL && temp->data != value){
            prev = temp;
            temp = temp->next;
        }
        if(temp->next == NULL){
            cout<<"There is no such value exits\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        temp = NULL;
    }

}

void removeValue(Node** head, int value){
    Node* temp = *head;
    if(temp != NULL && temp->data == value){
        temp->data = 0;
    }
    else{
        while(temp != NULL && temp->data != value){
            temp = temp->next;
        }
        if(temp->next == NULL){
            cout<<"There is no such value exits\n";
            return;
        }
        temp->data = 0;
    }
}

void display(Node *n)
{
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

void getNodeOf(Node *n){
    cout<<n->data<<endl;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    display(head);
    cout<<endl;

    insertFront(&head,4);
    display(head);
    cout<<endl;

    insertBack(&head,5);
    display(head);
    cout<<endl;

    cout<<searching(head,0)<<endl;
    getNodeOf(second);




}
