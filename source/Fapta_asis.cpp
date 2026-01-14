#include "../include/Fapta_asis.h"

Fapta_asis::Fapta_asis(const std::vector<std::string> &dovezi, const std::string &tehnologie): Fapta(dovezi),
    tehnologie(tehnologie) {
}

Fapta_asis::Fapta_asis(const Fapta_asis &other): Fapta{other},
                                                 tehnologie{other.tehnologie} {
}

Fapta_asis & Fapta_asis::operator=(const Fapta_asis &other) {
    if (this == &other)
        return *this;
    Fapta::operator =(other);
    tehnologie = other.tehnologie;
    return *this;
}

Fapta_asis::~Fapta_asis() = default;

int Fapta_asis::getSeveritate() {
    int severitate = 8;
    if (tehnologie == "Chat GPT" || tehnologie == "Gemini" || tehnologie == "Copilot")
        severitate+=2;
    return severitate;
}
