#include "../include/Persoana.h"

Persoana::Persoana(const std::string &nume): nume(nume) {
}

Persoana::Persoana(const Persoana &other): nume{other.nume} {
}

Persoana & Persoana::operator=(const Persoana &other) {
    if (this == &other)
        return *this;
    nume = other.nume;
    return *this;
}

Persoana::~Persoana() {
}
