#include <vector>
using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value);
};

int returnSize(LinkedList *head){
  int pass = 0;
  LinkedList *bruh = head;
  while(bruh != nullptr){
    pass++;
    bruh = bruh->next;
  }
  return pass;
}

void removeKthNodeFromEnd(LinkedList *head, int k) {
  // Write your code here.
  //n fin the number of nodes
  // the subtract the k 
  // remove the element
  int size = returnSize(head) - k;
  int bruhh = 1;
  LinkedList *bruhhh = head;
  while(bruhh < size && bruhhh != nullptr ){
    bruhhh = bruhhh->next;
    bruhh++;
  }
  if(size != 0){
    bruhhh->next = bruhhh->next->next;
  }
  if(size == 0){
    head->value = head->next->value;   // according to question we cant change head pointer
    head->next = head->next->next;
  }
}
