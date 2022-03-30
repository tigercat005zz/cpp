#include <string>
#include <iostream>
using namespace std; 
int buzz = 0;
void myFunction() {
  if (buzz % 5 == 0 && buzz % 3 == 0)
  {
      cout << "BuzzFizz";
  }
  else if (buzz % 5 == 0) {
      cout << "Buzz";
  }
  else if (buzz % 3 == 0) {
      cout << "Fizz";
  }
  else {
      cout << buzz;
  }
  
}

int main() {
  cout << "Please enter a numeber: " << endl;
  cin >> buzz;
  myFunction(); // call the function
  return 0;
}
