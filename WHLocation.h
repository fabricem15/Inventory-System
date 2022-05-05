#ifndef WHLOCATION_H
#define WHLOCATION_H
#include "Location.h"
#include "defs.h"
#include <string>
#include <iostream>

using namespace std;

class WHLocation: public Location{
  public:
    WHLocation();
    bool add(const string& productName, int amount);
    virtual bool remove(int amount);
    virtual int getCapacity()const;
  private:
    static const char code;
    static const int capacity;
    static int nextId;
};
#endif
