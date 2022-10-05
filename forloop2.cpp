
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << " n is prime num" << endl;
      break;
    } else {
      cout << " n is not prime num" << endl;
      break;
    }
    return 0;
  }
}