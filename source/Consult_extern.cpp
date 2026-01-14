#include "../include/Consult_extern.h"

Consult_extern::Consult_extern(const std::string &nume): Persoana(nume) {
}

Consult_extern::Consult_extern(const Consult_extern &other): Persoana{other} {
}

Consult_extern & Consult_extern::operator=(const Consult_extern &other) {
    if (this == &other)
        return *this;
    Persoana::operator =(other);
    return *this;
}

Consult_extern::~Consult_extern() = default;

float Consult_extern::getSeveritateModificata(std::shared_ptr<Fapta> fapta) {
    float severitate = fapta->getSeveritate();
    return 0.5*severitate;
}

float Consult_extern::getSeveritateModificataImport(std::shared_ptr<Fapta> fapta) {
    float severitate = fapta->getSeveritate();
    return 0.75*severitate;
}
