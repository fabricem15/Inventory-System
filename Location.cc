#include "Location.h"

const string Location::NONE = "Empty";

Location::Location(const char& letter, int num){
  this->id = letter + to_string(num);
  quantity = 0;
  product = NONE;
}

// getters
string Location::getId()const{return id;}
string Location::getProduct()const{return product;}
int Location::getQuantity()const{return quantity;}
// bools
bool Location::isEmpty()const{return quantity == 0;}
bool Location::isAvailable()const{return product == NONE;}

bool Location::remove(int amount){
  if (amount > quantity){
    return false;
  }
  quantity -= amount;
  return true;
}

void Location::print()const{
  cout << "Location: " << id << endl<<"Product: " << product << endl<< "Quantity: " << quantity << endl<<endl;
}
