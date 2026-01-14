//
// Created by vladc on 14.01.2026.
//

#ifndef COLCOVIU2026MATEINFO_EXCEPTIONS_H
#define COLCOVIU2026MATEINFO_EXCEPTIONS_H
#include <stdexcept>

class Exceptii_definite: public std::runtime_error {
public:
    explicit Exceptii_definite(const std::string& mesajEroare) : std::runtime_error(mesajEroare){}
};

#endif //COLCOVIU2026MATEINFO_EXCEPTIONS_H