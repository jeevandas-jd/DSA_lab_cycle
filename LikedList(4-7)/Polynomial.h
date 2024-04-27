

#include <iostream>

struct Term {
    int coeff;
    int exp;
    Term* next;

    Term(int c, int e) : coeff(c), exp(e), next(nullptr) {}
};

class Polynomial {
private:
    Term* head;

public:
    Polynomial();
    ~Polynomial();
    void insertTerm(int coeff, int exp);
    void display();
    Polynomial add(Polynomial& p);
    Polynomial multiply(Polynomial& p);
};


