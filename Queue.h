#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>
#include "WHLocation.h"

using namespace std;

class Queue{

  class Node {
    public:
      Node* next;
      WHLocation* data;
  };

  public:
    Queue();
    ~Queue();
    // functions
    bool isEmpty()const;
    void addLast(WHLocation* loc);
    void popFirst(WHLocation** loc);
    void peekFirst(WHLocation** loc);
    void print() const;


  private:
    Node* head;
    Node* tail;
};
#endif
