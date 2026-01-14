#include "../include/Cadru_didactic.h"

Cadru_didactic::Cadru_didactic(const std::string &nume, int vechime): Persoana(nume),
                                                                      vechime(vechime) {
}

Cadru_didactic::Cadru_didactic(const Cadru_didactic &other): Persoana{other},
                                                             vechime{other.vechime} {
}

Cadru_didactic & Cadru_didactic::operator=(const Cadru_didactic &other) {
    if (this == &other)
        return *this;
    Persoana::operator =(other);
    vechime = other.vechime;
    return *this;
}

Cadru_didactic::~Cadru_didactic() = default;

float Cadru_didactic::getSeveritateModificata(std::shared_ptr<Fapta> fapta) {

    float severitate = fapta->getSeveritate();
    if (vechime < 5 || vechime > 15)
        severitate = severitate*1.25;

    return severitate;
}
