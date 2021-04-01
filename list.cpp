#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

//constructor initialises the node pointers to null

List::List(){
    head = curr = temp = NULL;
}

//function prints the contents of the linked list

void List::printList(){
    if(isEmpty()){
        cout << "List is empty";
    }
    else{
        curr = head;
        while(curr != NULL){
            cout << curr->data << '\n';
            curr = curr->next;
        }
    }
}   

//function checks if the list is empty

bool List::isEmpty(){
    return !head;
}

//function adds a node at the tail of the list

void List::addNode(int data){
    node* newnode = new node;
    
    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
    }
    else{
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = newnode;
    }
}

//function adds a node at the head of the list

void List::addNode(int data, char flag){
    if(flag == 'f'){
        node* newnode = new node;
        newnode->data = data;
        if(head == NULL){
            newnode->next = NULL;
            head = newnode;        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }
}

//function deletes a node with given data

void List::delNode(int data){
    curr = head;
    temp = curr;
    while(curr->data != data){
        temp = curr;
        curr = curr->next;
    }
    temp->next = curr->next;
}

//function returns the number of nodes in a list

int List::size(){
    int count=0;
    curr = head;
    while(curr != NULL){
        curr = curr->next;
        count++;
    }
    return count;
}