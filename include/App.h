#pragma once
#include <iostream>
#include <unordered_map>

#include "Caz.h"

class App {
    explicit App();
    App(const App &other);
    App & operator=(const App &other);
    ~App();

    std::unordered_map<int, std::shared_ptr<Caz>> cazuri;
    //std::vector<std::shared_ptr<Caz>> cazuri;
public:
    static App& getInstance();
    // void print(){std::cout<<"da";}
    void addCaz(const Caz&);
    void addFapta(int, const std::shared_ptr<Fapta>&) const;
};
