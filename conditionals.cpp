// conditionals in cpp
#include <iostream>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  cout <<" the value of n is : "<< n<< endl;
  // if n is pos
  if (n>0)
  {
    cout <<" n is positive "<<endl;
  }
  else if (n<0)
  {
    cout <<" n is negative " << endl;
  }
  else 
  {
    cout<< " n is zero  "<< endl;
    
  }
}



