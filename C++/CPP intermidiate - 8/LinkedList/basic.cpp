#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next; // yeah store krta hai next address of element

    node(int val){
        data = val;
        next = NULL;
    }
};

void print(node * head){
    node * temp =head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

void insertFront(node * &head){
    node *temp = new node(0);
    temp -> next = head;
    head = temp;
}

void insertEnd(node * &head){
    node *temp = new node(4);
    node *remp =head;
    while(remp->next != NULL){
        remp = remp -> next;
    }
    remp->next =temp;
}

void deleteFront(node* &head){
    // if(head == NULL) return;
    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(node *&head){
    node * fast =head;
    node * slow =head;

    while(fast->next != NULL){
        slow = fast;
        fast = fast->next;
    }
    slow -> next =NULL;
    delete fast;
}

int calLength(node * head){
    
    node *remp =head;
    int count =0;
    while(remp != NULL){
        remp = remp -> next;
        count++;
    }
    return count;
    
}
    int main(){
        node * head = new node(1);
        head->next = new node(2);
        head->next->next = new node(3);
        
        // print(head);
        // insertFront(head);
        
        // cout<<endl;
        // print(head);
        // cout<<endl;

        // insertEnd(head);
        // print(head);

        // deleteFront(head);
        // print(head);

        // deleteEnd(head);
        // print(head);

        print(head);
        cout<<endl;
        cout<<calLength(head);
     return 0;
}