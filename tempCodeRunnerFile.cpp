#include <iostream>
using namespace std;
#include "LinkedList.cpp"
int main()
{
    Linkedlist L1;
    L1.insertNode(1);
    L1.insertNode(2);
    L1.insertNode(3);
    L1.insertNode(4);
    L1.insertNode(5);
    L1.printList();
    return 0;
}