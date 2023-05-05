#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
    public:
    LinkedList();
    bool swap(int pos1,int pos2);
    bool find_and_delete(int target);
    
    private:
    Node* head;
    Node* traverse(int index);

};
#endif
