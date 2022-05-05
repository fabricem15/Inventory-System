#include "StoreLocation.h"

int StoreLocation::nextId = 1;
const char StoreLocation::code = 'A';
const int StoreLocation::capacity = SLOC_CAPACITY;

StoreLocation::StoreLocation():Location(code, nextId++){}

void StoreLocation::setProduct(const string& productName){product = productName;}
int StoreLocation::getCapacity()const{return capacity;}
int StoreLocation::getFreeSpace()const {return capacity - quantity;}

bool StoreLocation::add(const string& productName, int amount){

  if (quantity + amount > capacity){ // if the quantity exceeds the capacity
    return false;
  }
  if (!isAvailable() && productName != product){ // there is already a product in this location
    return false;
  }


  StoreLocation::setProduct(productName);
  quantity += amount;
  return true;
}
