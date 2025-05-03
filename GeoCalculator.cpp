#include <iostream>
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"

using namespace std;

void showBanner() {
    cout << "==============================\n";
    cout << "    Geometry Area Calculator  \n";
    cout << "==============================\n";
}

void showMenu() {
    cout << "\nSelect Shape:\n";
    cout << "1. Rectangle\n";
    cout << "2. Circle\n";
    cout << "3. Triangle\n";
    cout << "4. Exit\n";
    cout << "Enter your choice (1-4): ";
}

int main() {
    int choice;
    Shape* shape = nullptr;

    do {
        showBanner();
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            shape = new Rectangle();
            break;
        case 2:
            shape = new Circle();
            break;
        case 3:
            shape = new Triangle();
            break;
        case 4:
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        shape->inputDimensions();
        shape->displayResult();

        delete shape;
        shape = nullptr;

        cout << "\n------------------------------\n";

    } while (choice != 4);

    return 0;
}
