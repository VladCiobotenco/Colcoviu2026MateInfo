#include "../include/Fapta_info.h"

Fapta_info::Fapta_info(const std::vector<std::string> &dovezi, sursa tip_sursa): Fapta(dovezi),
    tip_sursa(tip_sursa) {
}

Fapta_info::Fapta_info(const Fapta_info &other): Fapta{other},
                                                 tip_sursa{other.tip_sursa} {
}

Fapta_info & Fapta_info::operator=(const Fapta_info &other) {
    if (this == &other)
        return *this;
    Fapta::operator =(other);
    tip_sursa = other.tip_sursa;
    return *this;
}

Fapta_info::~Fapta_info() = default;

int Fapta_info::getSeveritate() {

    int severitate=1;
    switch (tip_sursa) {
        case sursa::material_didactic: severitate+=2; return severitate;
        case sursa::Internet: severitate+=3; return severitate;
        default: return severitate;
    }
}
