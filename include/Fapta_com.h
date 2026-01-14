#pragma once
#include "Fapta.h"

class Fapta_com: public Fapta {
    std::vector<std::string> alte_persoane;
    std::string metoda;

public:
    Fapta_com(const std::vector<std::string> &dovezi, const std::vector<std::string> &alte_persoane,
        const std::string &metoda);
    Fapta_com(const Fapta_com &other);
    Fapta_com & operator=(const Fapta_com &other);
    ~Fapta_com() override;

    int getSeveritate() override;
};