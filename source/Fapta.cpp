#include "../include/Fapta.h"

Fapta::Fapta(const std::vector<std::string> &dovezi): dovezi(dovezi) {
}

Fapta::Fapta(const Fapta &other): dovezi{other.dovezi} {
}

Fapta & Fapta::operator=(const Fapta &other) {
    if (this == &other)
        return *this;
    dovezi = other.dovezi;
    return *this;
}

Fapta::~Fapta() {
}
