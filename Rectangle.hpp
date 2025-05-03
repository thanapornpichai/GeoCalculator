#pragma once
#include "Shape.hpp"

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    void inputDimensions() override;
    double calculateArea() override;
    void displayResult() override;
};
