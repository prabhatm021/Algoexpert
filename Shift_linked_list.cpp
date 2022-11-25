using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *shiftLinkedList(LinkedList *head, int k) {
  // Write your code here.
  LinkedList *storeLink = nullptr;
  LinkedList *storeHead = head;
  LinkedList *bruh = head;
  LinkedList *forsize = head;

  int size_bruh = 0;
  while(forsize != nullptr){
    size_bruh = size_bruh + 1;
    forsize = forsize->next;
  }

  if(k < 0){
    k = k % size_bruh;
    k = k + size_bruh;
  }
  
  for(int i = 0; i< k ; i++){
    LinkedList *Listhead = bruh;
    while(Listhead->next != nullptr){
      storeLink = Listhead;  // it stores the last link before the new head
      Listhead = Listhead->next;
    }
    storeHead = storeLink->next; // stores the ending head
    storeLink->next = nullptr; //ending the last link before the new head to null
    storeHead->next = bruh; // point the head of the first
    bruh = storeHead; // changing the new head
  }
  return storeHead;
}