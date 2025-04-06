#include <iostream>

int main()
{
  // int sum = 0, val = 50;

  // while (val <= 100)
  // {
  //   sum += val;
  //   val++;
  // }
  // std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  // int num = 9;
  // while (num >= 0)
  // {
  //   std::cout << num << std::endl;
  //   num--;
  // }

  int usr1 = 0, usr2 = 0;

  std::cout << "Enter two numbers" << std::endl;

  std::cin >> usr1 >> usr2;

  while (usr1 <= usr2)
  {
    std::cout << usr1 << std::endl;
    usr1++;
  }

  return 0;
}