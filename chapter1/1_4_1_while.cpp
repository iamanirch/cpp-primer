#include <iostream>


int main()
{
  int sum = 0, val = 1;
  // keep executing the while as long as val is less than or equal to 10
  while (val <= 10) {
    sum += val; // assigns sum + val to sum
    ++val; // add 1 to val
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  std::cout << "Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100" << "\n";
  sum = 0, val = 50;
  while (val <= 100) {
    sum += val;
    ++val;
  }
  std::cout << " > Sum of 50 to 100 inclusive is " << sum << std::endl;

  std::cout << "Exercise 1.10: Use the decrement operator to write a while that prints the numbers from ten down to zero" << "\n";
  val = 10;
  while (val >= 0) {
    std::cout << " > number: " << val << std::endl;
    --val;
  }

  std::cout << "Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers" << "\n";
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  while (v1 <= v2) {
    std::cout << " > number: " << v1 << std::endl;
    ++v1;
  }

  return 0;
}
