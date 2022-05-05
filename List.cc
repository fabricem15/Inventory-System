#include <iostream>
#include <string>
using namespace std;

#include "List.h"

List::List(): head(NULL){}

List::~List(){
    Node* currNode = head;
    Node* nextNode = NULL;

    while(currNode!=NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

//add in sorted order by name
void List::add(Product* prod){
    Node* newNode = new Node();
    newNode->data = prod;
    newNode->next = NULL;

    Node* currNode = head;
    Node* prevNode = NULL;

    while(currNode!=NULL){
        if (newNode->data->getName() < currNode->data->getName()){
            break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    //insert currNode
    if (prevNode == NULL){
        head = newNode;
    }else{
        prevNode->next = newNode;
    }
    newNode->next = currNode;
}

void List::remove(const string& name, Product** goner){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (currNode->data->getName() == name){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (currNode == NULL){
        *goner = NULL;
        return;
    }
    //currNode is not NULL
    if (prevNode == NULL){
        head = currNode->next;
    }else{
        prevNode->next = currNode->next;
    }
    *goner = currNode->data;
    delete currNode;
}

void List::get(const string& name, Product** prod){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (currNode->data->getName() == name){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }

    if (currNode == NULL){
        *prod = NULL;
        return;
    }
    //currNode is not NULL
    *prod = currNode->data;
}

bool List::isEmpty()const{
  return head == NULL;
}
void List::findProduct(const string& name, Product** prod){
  Node * currNode;
  Node * prevNode;

  currNode = head;
  prevNode = NULL;

  while (currNode!=NULL){
      if (currNode->data->getName() == name){
        *prod = currNode->data;
        return;
      }
      prevNode = currNode;
      currNode = currNode->next;
  }
  *prod = NULL;
}

void List::removeUpTo(const string& name){
    Node * currNode;
    Node * prevNode;

    currNode = head;
    prevNode = NULL;

    while (currNode!=NULL){
        if (name < currNode->data->getName()){
           break;
        }
        prevNode = currNode;
        currNode = currNode->next;
        delete prevNode->data;
        delete prevNode;
    }

    head = currNode;
}

void List::print() const{
    Node* currNode = head;
    cout<<"Print list..."<<endl;

    if (currNode == NULL){
        cout <<"List empty"<<endl;
    }

    while(currNode != NULL){
        currNode->data->print();
        currNode = currNode->next;
    }
}
