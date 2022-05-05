#include "WHLocation.h"

int WHLocation::nextId = 1;
const char WHLocation::code = 'B';
const int WHLocation::capacity = WHLOC_CAPACITY;

WHLocation::WHLocation():Location(code, nextId++){}

bool WHLocation::add(const string& productName, int amount){
  if (isAvailable() && this->quantity+ amount <= capacity){
    this->product = productName;
    this->quantity = this->quantity+amount;
    return true;
  }
  return false;
}
int WHLocation::getCapacity()const{return capacity;}
bool WHLocation::remove(int amount){
  if (Location::remove(amount) == false){
    return false;
  }
  if (quantity == 0){
    product = NONE;
  }
  return true;
}
