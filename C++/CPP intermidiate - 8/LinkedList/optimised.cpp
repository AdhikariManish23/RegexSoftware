#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data ;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
}; 

// print linked List
void print(node *head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


// Insert in Front
void insertFront(node * &head,int val){
    node * temp = new node(val);
    temp ->next = head;
    head = temp;
}


// Find length
int findLength(node * head){
    int count = 0;
    node * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;

}


// insert End
void insertEnd(node * &head, int val){
    node * newNode = new node(val);
    node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

// insert element at given point

void insertatGivenPoint(node *head,int pos,int val){
    node * newNode = new node(val);
    node * temp1 = head;
    node * temp2 = head;

    int i =0;
    while(i < pos){
        temp2 = temp1;
        temp1 =temp1 -> next;
        i++;
}

    temp2->next = newNode;
    newNode->next =temp1;
}
    int main(){
    
        node *head = new node(1);
        head->next = new node(2);
        head->next->next = new node(3);
        head->next->next->next = new node(4);

        insertFront(head,50);
        insertFront(head,11);

        insertEnd(head,87);

        cout<<findLength(head);
        cout<<endl;
        print(head);

insertatGivenPoint(head,3,2000);
print(head);

     return 0;
}