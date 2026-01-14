#include "../include/Fapta_com.h"

Fapta_com::Fapta_com(const std::vector<std::string> &dovezi, const std::vector<std::string> &alte_persoane,
    const std::string &metoda): Fapta(dovezi),
                                alte_persoane(alte_persoane),
                                metoda(metoda) {
}

Fapta_com::Fapta_com(const Fapta_com &other): Fapta{other},
                                              alte_persoane{other.alte_persoane},
                                              metoda{other.metoda} {
}

Fapta_com & Fapta_com::operator=(const Fapta_com &other) {
    if (this == &other)
        return *this;
    Fapta::operator =(other);
    alte_persoane = other.alte_persoane;
    metoda = other.metoda;
    return *this;
}

Fapta_com::~Fapta_com() = default;

int Fapta_com::getSeveritate() {
    int severitate = 5;
    if (alte_persoane.size()>2)
        severitate+=3;
    if (metoda == "scris")
        severitate+=1;
    if (metoda != "scris" && metoda !="oral") //Asta inseamna ca se foloseste tehnologia
        severitate+=2;

    return severitate;
}
