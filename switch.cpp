#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >>n;
  switch(n)
    {
      case 10:
      cout<< " you enter 10 "<< endl;
      break;
      case 20:
      cout <<" you enter 20 "<<endl;
      break;

        default:
      cout << " you enter the invalid number "<< endl;
      break;
    }
}