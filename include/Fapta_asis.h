#pragma once
#include "Fapta.h"

class Fapta_asis: public Fapta {
    std::string tehnologie;

public:
    Fapta_asis(const std::vector<std::string> &dovezi, const std::string &tehnologie);
    Fapta_asis(const Fapta_asis &other);
    Fapta_asis & operator=(const Fapta_asis &other);
    ~Fapta_asis() override;

    int getSeveritate() override;
};