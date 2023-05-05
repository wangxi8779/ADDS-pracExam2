 #include "LinkedList.h"

  LinkedList::LinkedList(){head = nullptr;}
  Node* LinkedList::traverse(int pos){
    if (head == nullptr){
        return head;
    }
    int currPos = 1;
    Node* currNode = head;
    while(currNode->link != nullptr && currPos<pos){
        currNode = currNode->link;
        currPos++;
    }
    return currNode;
  }

  bool LinkedList::find_and_delete(int target){
    int currIndex =0;
    Node* currNode = head;
    while (currNode != nullptr && currNode->data != target){
        currIndex++;
        currNode = currNode->link;
    }
    if (currNode == nullptr){
        return false;
    }
    Node*prevNode = traverse(currIndex-1);
    Node* node = traverse(currIndex);
    prevNode->link = node->link;
    delete node;
    return true;
  }

 bool LinkedList::swap(int pos1,int pos2){
     
 }