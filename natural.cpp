#include <iostream>
using namespace std;

int main() {
    int i=1, num, sum = 0;

    cout << "Enter a number - ";
    cin >> num;

    for (i; i <= num; i++) {
        sum = sum +  i;
    }

    cout << "Sum of natural numbers upto " << num << " is " << sum;
    
    return 0;
}