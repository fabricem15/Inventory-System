#ifndef LIST_H
#define LIST_H

#include "Product.h"

class List{

    //private by default
    class Node {

        public:
            Product* data;
            Node*    next;
    };

    public:
        List();

        //new functions
        bool isEmpty()const;
        void findProduct(const string& name, Product** prod);
        // Any data left in the List gets destroyed
        ~List();
        //we have unlimited size, so add always succeeds
        void add(Product*);
        //return false if name not found
        void get(const string& name, Product**);
        //double pointer for a return parameter of a pointer
        void remove(const string& name, Product**);

        void removeUpTo(const string& name);

        void print() const;  //not modify this List object

    private:
        Node* head;
};


#endif
