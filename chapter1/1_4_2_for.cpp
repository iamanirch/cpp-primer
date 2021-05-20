#include <iostream>

int main()
{
  int sum = 0;
  // sum values from 1 through 10 inclusive
  for (int val = 1; val <= 10; ++val)
    sum += val; // equivalent to sum = sum + val
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  std::cout << "Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100" << "\n";
  sum = 0;
  for (int val = 50; val <= 100; ++val) {
    sum += val;
  }
  std::cout << " > Sum of 50 to 100 inclusive is " << sum << std::endl;

  std::cout << "Exercise 1.10: Use the decrement operator to write a while that prints the numbers from ten down to zero" << "\n";
  for (int val = 10; val >= 0; --val) {
    std::cout << " > number: " << val << std::endl;
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
