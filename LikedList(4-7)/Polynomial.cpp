//
// Created by jeevandas on 31/3/24.
//
#include "Polynomial.h"

Polynomial::Polynomial() : head(nullptr) {}

Polynomial::~Polynomial() {
    Term* temp = head;
    while (temp) {
        Term* next = temp->next;
        delete temp;
        temp = next;
    }
    head = nullptr;
}

void Polynomial::insertTerm(int coeff, int exp) {
    Term* newNode = new Term(coeff, exp);
    if (!head) {
        head = newNode;
        return;
    }

    Term* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void Polynomial::display() {
    Term* temp = head;
    while (temp) {
        std::cout << temp->coeff << "x^" << temp->exp;
        temp = temp->next;
        if (temp) std::cout << " + ";
    }
    std::cout << std::endl;
}

Polynomial Polynomial::add(Polynomial& p) {
    Polynomial result;
    Term* temp1 = head;
    Term* temp2 = p.head;

    while (temp1 && temp2) {
        if (temp1->exp > temp2->exp) {
            result.insertTerm(temp1->coeff, temp1->exp);
            temp1 = temp1->next;
        } else if (temp1->exp < temp2->exp) {
            result.insertTerm(temp2->coeff, temp2->exp);
            temp2 = temp2->next;
        } else {
            result.insertTerm(temp1->coeff + temp2->coeff, temp1->exp);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    while (temp1) {
        result.insertTerm(temp1->coeff, temp1->exp);
        temp1 = temp1->next;
    }

    while (temp2) {
        result.insertTerm(temp2->coeff, temp2->exp);
        temp2 = temp2->next;
    }

    return result;
}

Polynomial Polynomial::multiply(Polynomial& p) {
    Polynomial result;
    Term* temp1 = head;
    while (temp1) {
        Term* temp2 = p.head;
        while (temp2) {
            result.insertTerm(temp1->coeff * temp2->coeff, temp1->exp + temp2->exp);
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    return result;
}
