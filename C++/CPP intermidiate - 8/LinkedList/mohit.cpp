#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
private:
    node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    node insertEnd(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            return *head;
        }
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return *head;
    }

    node insertfront(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            return *head;
        }

        newNode->next = head;
        head = newNode;

        return *head;
    }

    void print()
    {

        node *temp = head;
        while (temp->next != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data;
    }

    node insertAtPoint(int val, int pos)
    {
        node *newNode = new node(val);
        node *temp = head;

        while (pos != 0)
        {

            pos--;
            if (pos != 0)
                temp = temp->next;
        }
        node *temp2 = temp->next;
        temp->next = newNode;
        newNode->next = temp2;
    }

    node deleteEnd()
    {
        if (head == NULL)
        {
            return *head;
        }

        node *temp = head;
        node *slow = temp;
        while (temp->next != NULL)
        {
            slow = temp;
            temp = temp->next;
        }
        slow->next = NULL;

        return *head;
    }


    void deleteFront(){
        node * temp = head;
        head = head->next;

        delete temp;
    }

    void deleteAtPoint(int pos)
    {
        if(pos == 0){
            node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node *fast = head;
        node *slow = head;

        int i = 0;
        while(i < pos){
            slow = fast;
            fast = fast->next;
            i++;
        }
        slow->next = fast->next;
        delete fast;
    }
};

int main()
{
    LinkedList l1;
    l1.insertEnd(1);
    l1.insertEnd(2);
    l1.insertEnd(3);
    l1.print();
    l1.insertfront(4);
    cout << endl;
    l1.print();
    cout << endl;
    l1.insertAtPoint(10, 4);
    l1.print();
    cout << endl;

    // l1.deleteEnd();
    // l1.print();
    // cout<<endl;

    // l1.deleteFront();
    // l1.print();

    l1.deleteAtPoint(1);
    l1.print();
    return 0;
}