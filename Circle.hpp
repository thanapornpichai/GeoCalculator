#pragma once
#include "Shape.hpp"

class Circle : public Shape {
private:
    double radius;

public:
    void inputDimensions() override;
    double calculateArea() override;
    void displayResult() override;
};
