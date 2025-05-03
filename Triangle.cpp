#include "Triangle.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

void Triangle::inputDimensions() {
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
}

double Triangle::calculateArea() {
    return 0.5 * base * height;
}

void Triangle::displayResult() {
    cout << "Area of Triangle: " << fixed << setprecision(2) << calculateArea() << "\n";
}
