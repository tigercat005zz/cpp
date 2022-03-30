#include <iostream>

using namespace std;

int main () {
    int wheels = 0;
    int figures = 0;
    int carBody = 0;
    cout << "How much wheels? " << endl;
    cin >> wheels;
    cout << "How many figures? " << endl;
    cin >> figures;
    cout << "How many car bodies? " << endl;
    cin >> carBody;
    int wheelCar = wheels / 4;
    int bodyCar = carBody / 1;
    int figuresCar = figures / 2;
    if (wheelCar >= 1 && figuresCar >= 1 && bodyCar >= 1) {
        cout << "You can make at least one car!" << endl;
        int x = std::min(wheelCar, figuresCar);
        int y = std::min(x, bodyCar);
        cout << "You can make " << y << " car/s." << endl;
    }
    else {
        cout << "You can not make at least one car!";
    }


    return(0);
}