#include "Queue.h"

Queue::Queue(){
  head = NULL;
  tail = NULL;
}

Queue::~Queue(){

  Node* currNode = head;
  Node* nextNode = NULL;

  while(currNode!=NULL){
      nextNode = currNode->next;
      delete currNode;
      currNode = nextNode;
  }
}

void Queue::peekFirst(WHLocation** loc){
  if (head != NULL){
    *loc = head->data;
  }
  else{
    cout << "location is now NULL" << endl;
  *loc = NULL;
  }
}

void Queue::popFirst(WHLocation** loc){
  if (isEmpty()){
    return;
  }
  *loc = head->data;

  Node* temp = head;
  head = head->next;
  delete temp;
}

void Queue::addLast(WHLocation* loc){
  Node* newNode = new Node();
  newNode->data = loc;
  newNode->next = NULL;


  if (head == NULL){ // if the head is null
    head = newNode;
  }
  if (tail != NULL){ // if the tail is not null, add newNode to the chain
    tail->next = newNode;
  }
  tail = newNode;
}

bool Queue::isEmpty()const{
  if (head ==NULL &&  tail == NULL){
    return true;
  }
  return false;
}

void Queue::print()const{
  cout << "Next in Queue: " << head->data->getId() << endl;
  cout << "Last in Queue: " << tail->data->getId() << endl;
}
