//bit wise opertaor 
#include <iostream>
using namespace std;
int main()
{
  int a=4;
  int b=5;
  cout << " hellow s" << endl;

  cout << " a&b : "<< (a&b)<< endl;  //and oper
  cout << " a|b : "<< (a|b) <<endl;  //or opr
  cout << " a^b : "<< (a^b) <<endl;  
  cout << " ~b : "<< (~b) <<endl;// bot oper

  // right and left shift opoerator
  cout << (17<<1) << endl;
  cout << (17<<2) << endl;
  cout << (19>>1) <<endl;
  cout << (19>>2) << endl;
  
  cout << endl << endl;
  
  // inc and dec operator
   int i =7;
  
  cout << (++i)<< endl;
   cout << (i--)<< endl;
  cout << (i++)<< endl;
  cout << (--i)<< endl;
 
  
  return 0;
  
  }




