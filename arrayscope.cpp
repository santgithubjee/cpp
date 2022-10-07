#include<iostream>
using namespace std;

void update (int arr[],int n)
{
  cout << endl<< "inside the main fun"<<endl;
  // updating array's first element
  arr[0]=128;
  for(int i=0; i<3; i++)
    {
      cout << arr[i]<<endl;
      
    }
  cout << endl;
  cout << "going back to main fun"<<endl;
}
int main() {
  int arr[3]={1,2,3};
  update(arr , 3);
    // printing the array
    cout <<"printing in main function "<<endl;
    for(int i=0; i<3; i++)
      {
        cout << arr[i] <<" ";
        cout << endl;
      }
    cout << endl;
    
    return 0;
}