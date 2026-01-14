#include "../include/Caz.h"

Caz::Caz(int nr_matricol, examinare tip_examinare, const std::string &nume):
    nr_matricol(nr_matricol),
    tip_examinare(tip_examinare),
    nume(nume),
    id(count++){
}

Caz::Caz(const Caz &other): id{other.id},
                            nr_matricol{other.nr_matricol},
                            tip_examinare{other.tip_examinare},
                            nume{other.nume},
                            fapte_sus(other.fapte_sus){
}

Caz & Caz::operator=(const Caz &other) {
    if (this == &other)
        return *this;
    id = other.id;
    nr_matricol = other.nr_matricol;
    tip_examinare = other.tip_examinare;
    nume = other.nume;
    fapte_sus = other.fapte_sus;
    return *this;
}

Caz::~Caz() = default;

int Caz::getId() const {
    return id;
}

std::string Caz::to_string(const examinare e) {
    switch (e) {
        case examinare::proiect: return "proiect";
        case examinare::colocviu: return "colocviu";
        default: return "examen";
    }
}

void Caz::addFapta(const std::shared_ptr<Fapta>& fapta) {
    fapte_sus.push_back(fapta);
}

float Caz::getSeveritateBaza() const {

    if (fapte_sus.empty()) {
        throw std::runtime_error("Impartire la 0!");
    }

    float sev=0;
    for (const auto& fapta: fapte_sus) {
        sev+=fapta->getSeveritate();
    }
    return sev/static_cast<float>(fapte_sus.size());
}

int Caz::count = 1;
