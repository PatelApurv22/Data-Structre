#include "Node.cpp"
#include <iostream>
using namespace std;
class Linkedlist{
    private:
    Node* head;
    public:
    Linkedlist()
    {
        head=new Node();
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
    
    void insertNodeAtBegging(int d){
        Node* temp=new Node(d);
        temp->next=head->next;
        head->next=temp; 
    }
    void InsertNodeAfterNthPosition(int data,int N)
    {
        Node* temp=GotoNthElement(N);
        Node* newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;

    }
    void insertNodeAtEnd(int d){
        Node* newNode = new Node(d);
        if(head==nullptr)
        {
            head->next=newNode;
            return;
        }
        else
        {
            Node* temp=gotolastnode();
            temp->next=newNode;

        }
    }
    void printList(){
        Node* t=head->next;
        while(t!=NULL)
        {
            cout<<t->data<<endl;
            t=t->next;
        }
    }
    void DeleteAtBegging()
    {
        Node* temp=head;
        head=head->next;
        free(temp);
    }
    void DeleteAtEnd()
    {
        Node *temp=gotosecondlastnode();
        free(temp->next);
        temp->next=nullptr;
    }
    void DeleteNthElement(int n)
    {
        Node* temp=GotoNthElement(n-1);
        Node* temp2= temp->next;
        temp->next=temp2->next;
        free(temp2);
    }
    
    Node* GotoNthElement(int N)
    {
        Node* temp=head;
        for(int i=N;i>0;i--)
        {
            temp=temp->next;
        }
        
        return temp;
    }
};