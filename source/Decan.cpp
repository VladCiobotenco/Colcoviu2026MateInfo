#include "../include/Decan.h"

#include "../include/Fapta_com.h"
#include "../include/Fapta_info.h"

Decan::Decan(const std::string &nume): Persoana(nume) {
}

Decan::Decan(const Decan &other): Persoana{other} {
}

Decan & Decan::operator=(const Decan &other) {
    if (this == &other)
        return *this;
    Persoana::operator =(other);
    return *this;
}

Decan::~Decan() {
}

float Decan::getSeveritateModificata(std::shared_ptr<Fapta> fapta) {
    float severitate = fapta->getSeveritate();

    if (std::dynamic_pointer_cast<Fapta_com>(fapta))
        severitate = severitate * 1.5;
    else if (std::dynamic_pointer_cast<Fapta_info>(fapta))
        severitate = severitate * 1.25;

    return severitate;
}
