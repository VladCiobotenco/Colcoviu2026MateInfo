#pragma once
#include "Fapta.h"

enum class sursa {
    material_didactic,
    ciorna,
    foaie_examen,
    Internet,
    alt_examen
};

class Fapta_info: public Fapta {
    sursa tip_sursa;
public:
    Fapta_info(const std::vector<std::string> &dovezi, sursa tip_sursa);
    Fapta_info(const Fapta_info &other);
    Fapta_info & operator=(const Fapta_info &other);
    ~Fapta_info() override;

    int getSeveritate() override;
};