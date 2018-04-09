/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

/*
*Diameter, Circumference and Area of a Circle*

1) Write a program that reads in the
  + radius of a circle as an integer (r)
  + prints the circle’s diameter, (2*r)
  + prints the circumference (2*pi*r)
  + prints the area (pi*r*r)
2) Use the constant value 3.14159 for π.
3) Do all calculations in output statements.
*/
int  main()
{
  int radius = 0;
  const double PI = 3.14159; // pi 

  std::cout << "What is the radius of the Circle?" << "\n";
  std::cin >> radius;
  std::cout << "The radius is " << radius << "\n";
  std::cout << "The diameter is " << 2 * radius << "\n";
  std::cout << "The circumference is " << 2 * PI * radius << "\n";
  std::cout << "The area is " << PI * radius * radius << "\n";
  
  return 0;

}
