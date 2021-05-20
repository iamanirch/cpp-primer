#include <iostream>
#include "Sales_item.h"

int main() {

  // std::cout << "main ex" << '\n';
  // Sales_item item1, item2;
  // std::cin >> item1 >> item2;
  // if (item1.isbn() == item2.isbn()) {
  //   std::cout << item1 + item2 << '\n';
  //   return 0;
  // } else {
  //   std::cerr << "Data must refer to same ISBN" << '\n';
  //   return -1;
  // }

  std::cout << "Ex 1.23" << '\n';
  Sales_item sum, currItem;
  if (std::cin >> currItem) {
    int cnt = 1;
    while (std::cin >> sum) {
      if (sum.isbn() == currItem.isbn()) {
        cnt++;
      } else {
        std::cout << currItem.isbn() << " occurs "<< cnt << " times." <<'\n';
        currItem = sum;
        cnt = 1;
      }
    }
    std::cout << currItem << " occurs "<< cnt << " times" << '\n';
  }
  return 0;
}
