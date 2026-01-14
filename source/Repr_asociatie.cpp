#include "../include/Repr_asociatie.h"

Repr_asociatie::Repr_asociatie(const std::string &nume): Persoana(nume) {
}

Repr_asociatie::Repr_asociatie(const Repr_asociatie &other): Persoana{other} {
}

Repr_asociatie & Repr_asociatie::operator=(const Repr_asociatie &other) {
    if (this == &other)
        return *this;
    Persoana::operator =(other);
    return *this;
}

Repr_asociatie::~Repr_asociatie() = default;

float Repr_asociatie::getSeveritateModificata(std::shared_ptr<Fapta> fapta) {
    float severitate = fapta->getSeveritate();
    return severitate*0.75;
}
