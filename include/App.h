#pragma once
#include <iostream>
#include <ostream>
#include <unordered_map>

#include "Caz.h"
#include "Comisie.h"

class App {
    explicit App();
    App(const App &other);
    App & operator=(const App &other);
    ~App();

    std::unordered_map<int, std::shared_ptr<Caz>> cazuri;
    std::vector<std::shared_ptr<Comisie>> comisii;
public:
    static App& getInstance();
    void addCaz(const Caz&);
    void addFapta(int, const std::shared_ptr<Fapta>&) const;
    void addComisie(const Comisie& comisie) {
        const auto newComisie = std::make_shared<Comisie>(comisie);
        comisii.push_back(newComisie);
    }

    void displayCazSev()const;
};
