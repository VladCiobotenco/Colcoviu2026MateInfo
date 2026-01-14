#pragma once
#include <memory>
#include <string>
#include "Fapta.h"

class Persoana {
    std::string nume;
public:
    explicit Persoana(const std::string &nume);
    Persoana(const Persoana &other);
    Persoana & operator=(const Persoana &other);
    virtual ~Persoana();

    virtual float getSeveritateModificata(std::shared_ptr<Fapta>) = 0;
};
