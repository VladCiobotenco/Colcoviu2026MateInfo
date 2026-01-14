//
// Created by vladc on 14.01.2026.
//

#include "../include/Comisie.h"

Comisie::Comisie(const std::vector<std::shared_ptr<Persoana>> &membrii_comisie): membrii_comisie(membrii_comisie) {
}

Comisie::Comisie(const Comisie &other): membrii_comisie{other.membrii_comisie} {
}

Comisie & Comisie::operator=(const Comisie &other) {
    if (this == &other)
        return *this;
    membrii_comisie = other.membrii_comisie;
    return *this;
}

Comisie::~Comisie() = default;

void Comisie::addMembru(const std::shared_ptr<Persoana> &newPers) {
    membrii_comisie.push_back(newPers);
}
