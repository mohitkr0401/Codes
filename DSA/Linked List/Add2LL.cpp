#include <bits/stdc++.h>
using namespace std;

// Define the structure of the node
class Node { //just change struct to class to make it a class
    public:
    int data;
    Node* next;

    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

//We have to add two list in reverse order and return the sum in reverse order
//We will use dummyHead to keep track of the head of the list
//We will use carry to keep track of the carry
//We will iterate through the list and add the elements of the list and the carry
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* temp1 = num1;
    Node* temp2 = num2;
    Node* dummyHead = new Node(-1);
    Node* current = dummyHead;
    int carry = 0;
    while(temp1!=NULL || temp2!=NULL){
        int sum = carry;
        if(temp1) sum += temp1->data;
        if(temp2) sum += temp2->data;

        Node* newNode = new Node(sum%10);
        current->next=newNode;
        current = current->next;
        carry=sum/10;
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        current->next = newNode;
    }
    return dummyHead->next;
}
