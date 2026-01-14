#pragma once
#include "Persoana.h"

class Repr_asociatie: public Persoana {
public:
    explicit Repr_asociatie(const std::string &nume);
    Repr_asociatie(const Repr_asociatie &other);
    Repr_asociatie & operator=(const Repr_asociatie &other);
    ~Repr_asociatie() override;

    float getSeveritateModificata(std::shared_ptr<Fapta>) override;
};