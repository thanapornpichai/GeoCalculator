#pragma once

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual void inputDimensions() = 0;
    virtual void displayResult() = 0;
};
