#ifndef STORELOCATION_H
#define STORELOCATION_H
#include <iostream>
#include "Location.h"

using namespace std;

class StoreLocation: public Location {
  public:
    StoreLocation();

    // member functions
    void setProduct(const string& productName);
    int getFreeSpace() const;
    virtual int getCapacity()const;
    bool add(const string& productName, int amount);
  private:
    static const char code;
    static const int capacity;
    static int nextId;
};
#endif
