#include <iostream>
using namespace std;

//Define a node
struct node{
    int num;
    node *next;
};
//Define a head node and set it to NULL
struct node *head = NULL;

//Insert node at start
void insertNode(int value){
    struct node *newNode=new node;
    newNode->num=value;
    newNode->next=head;
    head=newNode;
}

//Delete the first node of list
void deleteFirst(){
    node *temp=head;
    head=head->next;
    free(temp);
}
//Display all the nodes
void displayAll(){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
}
int main(){
    insertNode(13);
    insertNode(33);
    insertNode(44);
    cout<<"Initial list: ";
    displayAll();
    cout<<endl<<"2nd list with first node deleted: ";
    deleteFirst();
    displayAll();
    cout<<endl<<"Adding 100 in a linked list: ";
    insertNode(100);
    displayAll();
}
