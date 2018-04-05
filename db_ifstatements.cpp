#include <iostream>
using namespace std; 
// If statements
int main()
{
  int c = 0;
  cout << "enter a number below 8 or above 16" <<endl;
  cin >> c;
 
  if ( c < 8 ){
        
        cout << c <<" is less than 8\n";
  }
 
  if  (c >= 17){

         cout << c << " is greater than or equal to 17\n";
  }
  return 0;
}
