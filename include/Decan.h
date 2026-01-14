#pragma once
#include "Persoana.h"

class Decan: public Persoana {
public:
    explicit Decan(const std::string &nume);
    Decan(const Decan &other);
    Decan & operator=(const Decan &other);
    ~Decan() override;

    float getSeveritateModificata(std::shared_ptr<Fapta>) override;
};