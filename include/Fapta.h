#pragma once
#include <string>
#include <vector>

class Fapta {
    std::vector<std::string> dovezi;
public:
    explicit Fapta(const std::vector<std::string> &dovezi);
    Fapta(const Fapta &other);
    Fapta & operator=(const Fapta &other);
    virtual ~Fapta();

    virtual int getSeveritate() = 0;
};
