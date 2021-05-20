/*
In C++ we define our own data structures by defining a class. A class defines a type along with a collection of operations that are related to that type. The class mechanism is one of the most important features in C++. In fact, a primary focus of the design of C++ is to make it possible to define class types that behave as naturally as the built-in types. In this section, we’ll describe a simple class that we can use in writing our bookstore program. We’ll implement this class in later chapters as we learn more about types, expressions, statements, and functions.
To use a class we need to know three things:
  * What is its name?
  * Where is it defined?
  * What operations does it support?
*/

#include <iostream>
#include "Sales_item.h"

int main() {
  // Sales_item item;
  // std::cout << "Ex 1.20" << std::endl;
  // while (std::cin >> item) {
  //   std::cout << item << std::endl;
  // }

  // std::cout << "Ex 1.21" << std::endl;
  // Sales_item item1, item2;
  // std::cin >> item1 >> item2;
  // if (item1 == item2) {
  //   std::cout << item1 + item2 << std::endl;
  // }
  // else
  //   std::cout << "not same books" << std::endl;

  Sales_item item, sum;
  std::cout << "Ex 1.22" << std::endl;
  while (std::cin >> item) {
    sum += item;
  }
  std::cout << "sum: " << sum <<std::endl;
  return 0;
}
