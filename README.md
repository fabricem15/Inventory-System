Name: Fabrice Mikobi
Student Number: 101196480
Preamble: An inventory system for a big box store like Ikea or Costco with Store and Warehouse locations in the same building. 
    - Uses inheritance for the Location class and its subclasses. 
    - Collection classes: LinkedList and Queue
    - Simulates receiving new products, selling those products and updating the warehouse database to reflect the stock.
Source files: 
  - Control.cc
  - List.cc
  - Location.cc
  - main.cc
  - Product.cc
  - Queue.cc
  - Store.cc
  - StoreLocation.cc
  - View.cc
  - WHLocation.cc
Header files:
  - Control.h
  - List.h
  - Location.h
  - main.h
  - Product.h
  - Queue.h
  - Store.h
  - StoreLocation.h
  - View.h
  - WHLocation.h
  - defs.h

Design decisions:
  - Decided to make my remove function simply virtual because both of the derived classes share some of the same functionalities. Thus, it seemed fitting that there be a default implementation for that function.

# ###################
Compilation commands:
  `make` to compile all sources files into object files and produce the program executable called `a3`
Launching commands:
  launch the program with `./a3`
