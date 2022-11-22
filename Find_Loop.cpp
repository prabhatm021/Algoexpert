#include <vector>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value);
};

LinkedList *findLoop(LinkedList *head) {
  // Write your code here.
  LinkedList *firstnode = head->next;
  LinkedList *secondnode = head->next->next;

  while(firstnode != secondnode){
    firstnode = firstnode->next;
    secondnode = secondnode->next->next;
  }

  firstnode = head;

  while(firstnode != secondnode){
    firstnode = firstnode->next;
    secondnode = secondnode->next;
  }

  return firstnode;
}

