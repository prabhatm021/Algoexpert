using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    this->next = nullptr;
  }
};

LinkedList *reverseLinkedList(LinkedList *head) {
  // Write your code here.

  LinkedList *currentnode = head;
  LinkedList *previousnode = nullptr;
  LinkedList *nextnode = nullptr;

  while(currentnode != nullptr){
    nextnode = currentnode->next; // saying what is next node
    currentnode->next = previousnode; // pointing back
    previousnode = currentnode; // previousnode for next while is current node
    currentnode = nextnode; // current node for next while is nextnode
  }
  
  return previousnode; // because the currentnode is changing
}
