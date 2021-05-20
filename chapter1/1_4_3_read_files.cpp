#include <iostream>
int main()
{
  int sum = 0, val = 0;
  std::cout << "start prompt" << '\n';
  while (std::cin >> val){
    sum += val;
  }

  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}
