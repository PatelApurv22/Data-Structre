#include <iostream>
using namespace std;
#include "LinkedList.cpp"
int main()
{
    Linkedlist L1;
    L1.insertNodeAtEnd(4);
    L1.insertNodeAtEnd(2);
    L1.insertNodeAtEnd(1);
    L1.insertNodeAtEnd(4);
    L1.insertNodeAtEnd(5);
    L1.insertNodeAtEnd(0);
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
    // L1.InsertNodeAfterNthPosition(44,3);
    cout<<"Last";
    L1.printList();
    cout<<"Sort";
    L1.Sort();
    L1.printList();
}