#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    public:
        Node(){
            data=0;
            next=nullptr;
        };
        Node(int d)
        {
            data=d;
            next=nullptr;
        };
};
