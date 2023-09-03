// AllaboutinsertioninLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AllaboutinsertioninLinkedList.h"
using namespace std;
class Node {

public :
    Node(int v)
    {
        val = v;
        nextaddress = NULL;
    }
    int val;
    Node* nextaddress;

};

void printfrom(Node* ptr) {
    while (ptr)
    {
        cout << ptr->val << "  ";
        ptr = ptr->nextaddress;
    }
    cout << endl;
}

void insertAtbegining(Node** a, int val) {
    //prepare a new node :
    Node* newnode =new Node(val);
    //place that node before the current head node
    newnode->nextaddress = *a;
    //move head of list that point to the new node
    *a = newnode;
    

}
void insertAtEnd(Node** head, int val) {
    
    //prepare the new node:

    Node* newnode = new Node(val);

    //if the link list is empty then:
    if (*head == NULL) {
        *head = newnode;
    }
    //Find the last index
    Node* last = *head;
    while (last->nextaddress)
    {
        last = last->nextaddress;
    }

    //insert new node after last node:

    last->nextaddress = newnode;
}

void insertafter(Node* a, int val) {

    //cheak if node is null or not
    if (a==NULL) {
        cout << "node can't be null" << endl;
    }
    //create new node 
    Node* newnode = new Node(val);

    //store newnode address in node a->next addrress

    newnode->nextaddress = a->nextaddress;
    a->nextaddress = newnode;
}
int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);

  
    a->nextaddress = b;
    b->nextaddress = c;
    insertAtbegining(&a, 0);
    insertAtbegining(&a, -1);
    insertAtEnd(&a, 4);
    printfrom(a);
    insertafter(a, 6);


    printfrom(a);

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
