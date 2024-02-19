#include "Node.cpp"
#include <iostream>
using namespace std;
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist()
    {
        head=nullptr;
    }
    Node* gotolastnode()
    {
        Node* temp1=head;
        while(temp1->next!=nullptr)
        {
            temp1=temp1->next;
        }
        return temp1;
    }
    Node* gotosecondlastnode()
    {
        Node* temp1=head;
        Node* temp2;
        while(temp1->next!=nullptr)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        return temp2;
    }
    void insertNodeAtEnd(int d){
        Node* newNode = new Node(d);
        if(head==nullptr)
        {
            head=newNode;
            return;
        }
        else
        {
            Node* temp=gotolastnode();
            temp->next=newNode;

        }
    }
    void insertNodeAtBegging(int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp; 
    }
    void printList(){
        Node* t=new Node();
        t=head;
        while(t!=NULL)
        {
            cout<<t->data<<endl;
            t=t->next;
        }
    }
    void DeleteAtBegging()
    {
        Node* temp=new Node();
        temp=head;
        head=head->next;
        free(temp);
    }
    void DeleteAtEnd()
    {
        Node *temp=new Node();
        temp=gotosecondlastnode();
        free(temp->next);
        temp->next=nullptr;
    }
};