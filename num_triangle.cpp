#include <iostream>
using namespace std;

int main()
{    
    int num=5, col=10;
    for(int i = 1 ; i <= num ; i++){
        for(int j = i ; j <= num-1 ; j++)
        cout << " ";
        for(int k = 1 ; k <= i ; k++)
        cout << k << " ";
        cout << "\n";
    }
       return 0;
}  
