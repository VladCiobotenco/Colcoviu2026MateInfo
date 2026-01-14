#include "../include/App.h"

App::App() {
}

App::App(const App &other) {
}

App & App::operator=(const App &other) {
    if (this == &other)
        return *this;
    return *this;
}

App::~App() = default;

App & App::getInstance() {
    static App instance;
    return instance;
}

void App::addCaz(const Caz& caz) {
    cazuri.insert({caz.getId(),std::make_shared<Caz>(caz)});
}

void App::addFapta(int id, const std::shared_ptr<Fapta>& fapta) const {
    const auto caz = cazuri.at(id);
    caz->addFapta(fapta);
}

void App::displayCazSev() const {
    for (const auto& pair: cazuri) {
        std::cout<<*pair.second<<"\n";
    }
}

