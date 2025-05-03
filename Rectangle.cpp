#include "Rectangle.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void Rectangle::inputDimensions() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

double Rectangle::calculateArea() {
    return length * width;
}

void Rectangle::displayResult() {
    cout << "Area of Rectangle: " << fixed << setprecision(2) << calculateArea() << "\n";
}
