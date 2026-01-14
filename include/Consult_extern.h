#pragma once
#include "Fapta_info.h"
#include "Persoana.h"

class Consult_extern: public Persoana {
    public:
    explicit Consult_extern(const std::string &nume);
    Consult_extern(const Consult_extern &other);
    Consult_extern & operator=(const Consult_extern &other);
    ~Consult_extern() override;

    float getSeveritateModificata(std::shared_ptr<Fapta>) override;
    static float getSeveritateModificataImport(std::shared_ptr<Fapta>);
};
