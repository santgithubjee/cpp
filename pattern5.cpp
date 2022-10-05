//  practice pattern problem by while loop in cpp
#include <iostream>
using namespace std;
int main()
{
  int n;
  int i =1;
  cout << " enter the value of n "<< endl;
  cin >> n;
  while (i<= n)
    {
      int j=1;
      while (j<=i)
        {
          cout << n+j-1;
          j++;
        }
      cout << endl;
      i++;
      
    }
  return 0;
}






