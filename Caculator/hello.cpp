#include <iostream>
using namespace std;

int main() {
  double z, y;
  string x;
  cout << "what is your first number? ";
  cin >> z;
  cout << "what is your second number? ";
  cin >> y;
  cout << "Will you do add, sub, div, or multi? "; 
  cin >> x;
  if (x == "add")
  {
    cout << "Your sum is " << (z+y);
  }
  if (x == "sub")
  {
    cout << "Your answer is " << (z-y);
  }
  if (x == "div")
  {
    cout << "Your quotient is " << (z/y);
  }
  if (x == "multi")
  {
    cout << "Your product if " << (z*y);
  }
}