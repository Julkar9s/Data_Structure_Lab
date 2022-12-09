#include<bits/stdc++.h>
using namespace std;

class Tree{
public:
    int data;
    Tree* left;
    Tree* right;

    Tree(){
        data = 0;
        left = NULL;
        right = NULL;
    }
    Tree(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class BinarySearchTree{
public:
    Tree* root;
    BinarySearchTree(){
        root = NULL;
    }
    bool isEmpty(){
        if(root == NULL)
            return true;
        else
            return false;
    }

    void insertNode(Tree* new_node){
        if(root == NULL){
            root = new_node;
            cout<<"Value inserted as root"<<endl;
        }
        else{
            Tree* temp = root;
            while(temp != NULL){
                if(temp->data == new_node->data)
                    cout<<"Value already exists"<<endl;
                else if((new_node->data < temp->data) && (temp->left == NULL)){
                    temp->left = new_node;
                    cout<<"Value inserted in Left"<<endl;
                    break;
                }
                else if(new_node->data < temp->data)
                    temp = temp->left;
                else if((new_node->data > temp->data) && (temp->right == NULL)){
                    temp->right = new_node;
                    cout<<"value inserted in Right"<<endl;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
    }

    void preOrder(Tree* r){
        if(r == NULL)
            return;
        cout<<r->data<<" ";
        preOrder(r->left);
        preOrder(r->right);
    }

    void inOrder(Tree* r){
        if(r == NULL)
            return;
        inOrder(r->left);
        cout<<r->data<<" ";
        inOrder(r->right);
    }


};

int main()
{
    int arr[10] = {40,50,10,20,30,70,90,80,60,200};
    BinarySearchTree o1;

    Tree* new_Node = new Tree();
    Tree* new_Node1 = new Tree();
    Tree* new_Node2 = new Tree();
    Tree* new_Node3 = new Tree();
    Tree* new_Node4 = new Tree();
    Tree* new_Node5 = new Tree();
    Tree* searchedNode = new Tree();
    new_Node->data = arr[0];
    new_Node1->data = arr[1];
    new_Node2->data = arr[2];
    new_Node3->data = arr[3];
    new_Node4->data = arr[4];
    new_Node5->data = arr[5];

    o1.insertNode(new_Node);
    o1.insertNode(new_Node1);
    o1.insertNode(new_Node2);
    o1.insertNode(new_Node3);
    o1.insertNode(new_Node4);
    o1.insertNode(new_Node5);


    cout<<"PRE_ORDER: ";
    o1.preOrder(new_Node);
    cout<<endl;

    cout<<"IN_ORDER: ";
    o1.inOrder(new_Node);
    cout<<endl;


}
