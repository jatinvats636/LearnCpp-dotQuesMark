#include <iostream>
using namespace std;

int main() { 
  int num, i, temp = 0;

  cout << "Enter a number - ";
  cin >> num;

  if (num == 1) {
    cout << num << " is not a prime number";
  } 
  else {
      for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
        temp = 1;
    }
  }
    if (temp == 0)
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";
  }
  
return 0;
}
