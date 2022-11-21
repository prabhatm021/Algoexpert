using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *sumOfLinkedLists(LinkedList *linkedListOne,
                             LinkedList *linkedListTwo) {
  LinkedList *newListPointer = new LinkedList(0);   // creating a new linked list

  LinkedList *FornewList = newListPointer;
  LinkedList *num1 = linkedListOne;
  LinkedList *num2 = linkedListTwo;

  int addremaining = 0;
  
  while(num1 != nullptr || num2 != nullptr || addremaining !=0){
    // loop need to be run for these condition
    int sum = 0;
    
    int numone = num1 != nullptr ? num1->value : 0;
    int numtwo = num2 != nullptr ? num2->value : 0;

    sum = numone + numtwo + addremaining;

    addremaining = sum/10;

    sum = sum%10;

    LinkedList *newNode = new LinkedList(sum);
    FornewList->next = newNode;
    FornewList = newNode;

    if(num1 != nullptr){
      num1 = num1->next;
    }

    if(num2 != nullptr){
      num2 = num2->next;
    }
    
    
  }

  return newListPointer->next;
}