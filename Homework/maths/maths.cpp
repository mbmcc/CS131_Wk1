#include <iostream>
/*
##Do Maths 
**Requirements**
 1) write a program that asks the user to enter two numbers, 
 + obtains the two numbers from the user 
 + prints the sum, 
 + product, 
 + difference, and 
 + quotient 
 of the two numbers.

*/
int  main()
{
  float numberOne = 0;
  float numberTwo = 0;
  
  std::cout << "We are doing some math with two numbers" << std::endl;
  std::cout << "What is your first number?" << std::endl;
  std::cin >> numberOne;
  std::cout << "What is your second number?" << std::endl;
  std::cin >> numberTwo;
  std::cout << "The sum of your numbers is " << numberOne + numberTwo << std::endl;
  std::cout << "The product of your numbers is " << numberOne * numberTwo << std::endl;
  std::cout << "The difference of your numbers is " << numberOne - numberTwo << std::endl;
  std::cout << "The quotient of your numbers is " << numberOne / numberTwo << std::endl;
  
  return 0;

}
