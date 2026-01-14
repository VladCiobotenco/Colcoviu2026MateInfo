//
// Created by vladc on 14.01.2026.
//

#ifndef COLCOVIU2026MATEINFO_COMISIE_H
#define COLCOVIU2026MATEINFO_COMISIE_H
#include "Persoana.h"


class Comisie {
    std::vector<std::shared_ptr<Persoana>> membrii_comisie;
public:
    explicit Comisie(const std::vector<std::shared_ptr<Persoana>> &membrii_comisie);
    Comisie(const Comisie &other);
    Comisie & operator=(const Comisie &other);
    ~Comisie();

    void addMembru(const std::shared_ptr<Persoana>& newPers);
};


#endif //COLCOVIU2026MATEINFO_COMISIE_H