#include <iostream>
using namespace std;

int main()
{    
    int row=4, col=5;
    for(int i = row ; i >= 1 ; i--){
        for(int j = 1 ; j <= i-1 ; j++)
        cout << " ";
        for(int k = 1 ; k <= col ; k++)
        cout << "*";
        cout << "\n";
    }
     return 0;
}
