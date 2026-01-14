#pragma once
#include <memory>
#include <string>
#include "Fapta.h"

enum class examinare {
    proiect,
    colocviu,
    examen
};

inline std::string to_string(examinare e) {
    switch (e) {
        case examinare::proiect: return "proiect";
        case examinare::colocviu: return "colocviu";
        default: return "examen";
    }
}

class Caz {
    static int count;
    int id, nr_matricol;
    examinare tip_examinare;
    std::string nume;
    std::vector<std::shared_ptr<Fapta>> fapte_sus;

public:
    Caz(int nr_matricol, examinare tip_examinare, const std::string &nume);
    Caz(const Caz &other);
    Caz & operator=(const Caz &other);
    ~Caz();

    int getId() const;
    static std::string to_string(examinare e);
    void addFapta(const std::shared_ptr<Fapta>& fapta);
};