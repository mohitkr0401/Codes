#include<bits/stdc++.h>
using namespace std;

// Implementing Doubly Linked List same as in Doubly_Implement.cpp

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* reverseDLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* prev = NULL;
    Node* current = head;
    while(current!=NULL){
        prev = current->prev;
        current->prev = current->next;
        current->next = prev;
        current = current->prev;
    }
    return prev->prev;
}

