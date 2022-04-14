#include <iostream>
# include <array>
#include <typeinfo>
using namespace std;

int main () {

    /*int grade;
    int minimum_points[5] = {0, 300, 350, 400, 450};
    string letterGrade[5] = {"F", "D", "C", "B", "A"};
    while (grade >= 0)
    {
        cout << "Enter minimum grade: " << endl;
        cin >> grade;
        if (grade >= 0 && grade < 300)
        {
            cout << "F" << endl;
        }
        if (grade >= 300 && grade < 350) {
            cout << "D" << endl;
        }
        if (grade >= 350 && grade < 400) {
            cout << "C" << endl;
        }
        if (grade >= 400 && grade < 450) {
            cout << "B" << endl;
        }
        if (grade >= 450) {
            cout << "A" << endl;
        }
        else if (grade < 0) {
            break;
        }
        
        
    }*/
    
    int numbers[2][10] = {
        {6, 9, 76, 45, 1, 90, 45, 7, 9, 2} ,
        {39, 2, 4, 5, 7, 90, 87, 56, 23, 4}

    };
    int num, num1;
    int sum = 0;
   for ( int i = 0; i < 2; i++ )
      for ( int j = 0; j < 10; j++ ) {
          
    
        //cout << "numbers[" << i << "][" << j << "]: ";
        //cout << numbers[i][j] << endl;
        num = numbers[i][j];
        sum = num + sum;
        cout << sum << endl;
        //cout << sum;
        //sum = sum + number;
        //cout << sum;
      }
    

   
    return(0);
}