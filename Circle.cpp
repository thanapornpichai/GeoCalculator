#include "Circle.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

void Circle::inputDimensions() {
    cout << "Enter radius: ";
    cin >> radius;
}

double Circle::calculateArea() {
    return M_PI * radius * radius;
}

void Circle::displayResult() {
    cout << "Area of Circle: " << fixed << setprecision(2) << calculateArea() << "\n";
}
