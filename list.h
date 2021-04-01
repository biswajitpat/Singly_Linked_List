#ifndef LIST_H
#define LIST_H

class List{
    private:
        struct node{
            int data;
            node* next;
        };
        node* head;
        node* curr;
        node* temp;
    public:
        List();
        bool isEmpty();
        void addNode(int);
        void addNode(int, char);
        void delNode(int);
        int size();
        void printList();
};
#endif