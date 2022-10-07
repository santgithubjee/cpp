#include<iostream>
using namespace std;

int main() {
    // declare
  // int number[15]={1,2,2,3,4,4,5,5,6,7,7,8,8,9,9};
   
     // accessing an array
    // for(int i=0; i<15; i++)
   //  {
  //     cout << " indext "<< i <<" :- "<< number[i]<< endl;
  //  }

  // taking input from the user
  
  int number[15];
  for(int i =0; i<15; i++)
    {
      cin>> number[i];
      
    }
  cout <<number[4];
    return 0;
}