#include <iostream>
#include <array>

using namespace std;

int main () {

    /*int month_input = 0;
    int days[12] = {31 , 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    cout << "Enter the number of your month 1-12: ";
    cin >> month_input;
    cout << "There is " << days[month_input - 1] << " Days";*/
    int sum = 0;
    int domestic[6] = {12000 , 45000 , 32000 , 67000, 24000, 55000};
    //int international[6] = {10000, 56000, 42000, 23000, 12000, 34000};
    int test[2] = {10, 10};
    cout << "Domestic sales from January to June" << endl;
    int l = sizeof(test)/sizeof(test[0]);
    cout << l;
    /*for (int i = 0; i < 16; i++)
    {
        cout << domestic[i] << endl;
    }
    cout << "International sales from January to June" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << international[i] << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        sum = sum + domestic[i];
    }
    for (int i = 0; i < 6; i++)
    {
        sum = sum + international[i];
    }
    cout << "Total made from both domestic and international sales from January to June: " << sum;*/
    
    
    
    
    

    return(0);
}