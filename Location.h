#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include "defs.h"

using namespace std;

class Location{

  public:
    Location(const char& id , int num);

    // getters
    string getId()const;
    string getProduct()const;
    int getQuantity()const;
    // member functions
    bool isEmpty()const;
    bool isAvailable()const;
    void print()const;

    // virtual functions
    virtual int getCapacity()const=0;
    virtual bool add(const string&, int) = 0;
    virtual bool remove(int);

  protected:
    string id;
    string product;
    int quantity;
    static const string NONE;
};
#endif
