#include <math.h>
#include<iostream>
using namespace std;
int main()
{

  // poer of a,b
  int a,b;
  cin >>a>>b;
  int  ans = 1;
  for (int i=1; i<=b; i++)
    {
      ans = ans*a;
    }
  cout <<ans<< endl;
  
  
  int c,d;
  cin >>c>>d;
  int  anss = 1;
  for (int i=1; i<=d; i++)
    {
      anss = anss*c;
    }
  cout <<ans<< endl; 
  }