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
using namespace std;
int
main ()
{
  float numberOne = 0;
  float numberTwo = 0;

  cout << "We are doing some math with two numbers\n";
  cout << "What is your first number?\n";
  cin >> numberOne;
  cout << "What is your second number?\n";
  cin >> numberTwo;
  cout << "The sum of your numbers is " << numberOne + numberTwo << "\n";
  cout << "The product of your numbers is " << numberOne * numberTwo << "\n";
  cout << "The difference of your numbers is " << numberOne - numberTwo << "\n";
  cout << "The quotient of your numbers is " << numberOne / numberTwo << endl;

  return 0;

}
