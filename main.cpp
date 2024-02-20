#include <iostream>
using namespace std;
#include "LinkedList.cpp"
int main()
{
    Linkedlist L1;
    L1.insertNodeAtEnd(1);
    L1.insertNodeAtEnd(2);
    L1.insertNodeAtEnd(3);
    L1.insertNodeAtEnd(4);
    L1.insertNodeAtEnd(5);
    L1.insertNodeAtEnd(6);
    L1.DeleteNthElement(6);
    L1.printList();
    
    L1.insertNodeAtBegging(0);
    L1.printList();
    L1.DeleteAtBegging();
    L1.printList();
    L1.DeleteAtEnd();
    L1.printList();
    L1.DeleteAtEnd();
    L1.printList();
    L1.InsertNodeAfterNthPosition(88,88);
    L1.printList();
}