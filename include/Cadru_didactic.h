#pragma once
#include "Persoana.h"

class Cadru_didactic: public Persoana {
    int vechime;
public:
    Cadru_didactic(const std::string &nume, int vechime);
    Cadru_didactic(const Cadru_didactic &other);
    Cadru_didactic & operator=(const Cadru_didactic &other);
    ~Cadru_didactic() override;

    float getSeveritateModificata(std::shared_ptr<Fapta>) override;
};