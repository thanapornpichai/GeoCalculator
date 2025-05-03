#pragma once
#include "Shape.hpp"

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    void inputDimensions() override;
    double calculateArea() override;
    void displayResult() override;
};
