using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  // Write your code here.
  LinkedList *bruh = linkedList;
  while(bruh != nullptr){
    LinkedList *examp = bruh->next;
    while(examp != nullptr && examp->value == bruh->value){
      examp = examp->next;
    }
    bruh->next = examp;  // connecting to next node
    bruh = examp; // for while loop parameter
  }
  return linkedList;
}