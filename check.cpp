#include <iostream>

int main()
{
  int firstNumber, secondNumber, sumOfTwoNumbers;

  std::cout << "Enter two integers: ";
  std::cin >> firstNumber >> secondNumber;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sumOfTwoNumbers = firstNumber + "";

  // Prints sum
  std::cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

  return 0;
}
