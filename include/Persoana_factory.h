//
// Created by vladc on 14.01.2026.
//

#ifndef COLCOVIU2026MATEINFO_PERSOANA_FACTORY_H
#define COLCOVIU2026MATEINFO_PERSOANA_FACTORY_H
#include <memory>

#include "Cadru_didactic.h"
#include "Consult_extern.h"
#include "Decan.h"
#include "Persoana.h"
#include "Repr_asociatie.h"


class Persoana_factory {
public:
    static std::shared_ptr<Persoana> createCadruDidactic(const std::string& nume, int vechime) {
        return std::make_shared<Cadru_didactic>(nume, vechime);
    }
    static std::shared_ptr<Persoana> createDecan(const std::string& nume) {
        return std::make_shared<Decan>(nume);
    }
    static std::shared_ptr<Persoana> createReprAsociatie(const std::string& nume) {
        return std::make_shared<Repr_asociatie>(nume);
    }
    static std::shared_ptr<Persoana> createConsultExtern(const std::string& nume) {
        return std::make_shared<Consult_extern>(nume);
    }
};


#endif //COLCOVIU2026MATEINFO_PERSOANA_FACTORY_H