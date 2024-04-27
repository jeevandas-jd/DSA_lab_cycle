//
// Created by jeevandas on 31/3/24.
//
#include <iostream>
#include "Polynomial.cpp"

using namespace std;

int main() {
    Polynomial poly1, poly2, result;

    // Example polynomials
    poly1.insertTerm(2, 3);  // 2x^3
    poly1.insertTerm(4, 2);  // 4x^2
    poly1.insertTerm(3, 0);  // 3x^0

    poly2.insertTerm(3, 3);  // 3x^3
    poly2.insertTerm(2, 1);  // 2x^1
    poly2.insertTerm(5, 0);  // 5x^0

    cout << "Polynomial 1: ";
    poly1.display();
    cout << "Polynomial 2: ";
    poly2.display();

    // Addition
    result = poly1.add(poly2);
    cout << "Polynomial Addition: ";
    result.display();

    // Multiplication
    result = poly1.multiply(poly2);
    cout << "Polynomial Multiplication: ";
    result.display();

    return 0;
}
