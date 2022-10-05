//  practice pattern problem by while loop in cpp
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin  >> n;
  int i =2;
  while (i<n)
    {
      if (n%i==0)
      {
        cout << " n is prime number "<< endl;
        
      }
      else {
        cout << " n is not prime number " << endl;
      }
       break;
      i++;
    }
  
  return 0;
}






