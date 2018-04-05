#include <iostream>
// Order of operations tests
int main()
{
    int xVar;
    int yVar;
    int zVar;
    
    xVar = 7 + 3 * 6 / 2 - 1; // should be 15 = 7+8
    std::cout <<"7 + 3 * 6 / 2 - 1 = "  << xVar;
    std::cout << "\n" << std::endl;
    
    yVar =  2 % 2 + 2 * 2 - 2 / 2; // should be 3 = 0+4-1
    std::cout <<  "2 % 2 + 2 * 2 - 2 / 2 = "  << yVar;
    std::cout << "\n" << std::endl;
    
    zVar = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) ); should be 324=27*12
    std::cout << "( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) ) ="  << zVar;
    std::cout << "\n" << std::endl;
    
    return 0;
}
