#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(){
            data=(int)NULL;
            next=nullptr;
        };
        Node(int d)
        {
            data=d;
            next=nullptr;
        };
};
class CNode{
    public:
        CNode* Left;
        int data;
        CNode* Right;
        CNode()
        {
            Left=nullptr;
            Right=nullptr;
            data=(int)NULL;
        };
        CNode(int d)
        {
            Left=nullptr;
            Right=nullptr;
            data=d;
        };
};