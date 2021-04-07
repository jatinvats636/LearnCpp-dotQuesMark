#include <iostream>
using namespace std;
  
// I tried but couldn't figure out exact logic, we can count stars by using a counter variable
// But don't know how to print them continuously

int main(){
  int n,counter = 0,stars = 9;
  cout << "No. the rows: ";
  cin >> n;
  for(int i=1;i<=n;i++)
  {
    for(int k=n;k>i;k--)
      cout << " ";
    cout <<"*";
      counter++;
      if(counter == stars)
      break;
    for(int l=1;l<i;l++)
      cout << "  ";
    cout << "*";
      counter++;
      if(counter == stars)
      break;
    for(int m=n;m>i;m--) 
      cout << "  ";
    cout << "*";
      counter++;
      if(counter == stars)
      break;
    for(int p=1;p<i;p++)
      cout << "  ";
    cout << "*";
      counter++;
      if(counter == stars)
      break;
    cout << "\n";
  }
  cout << counter;
    return 0;}
