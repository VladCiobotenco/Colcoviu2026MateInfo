#include <iostream>

#include "include/App.h"
#include "include/Cadru_didactic.h"
#include "include/Decan.h"
#include "include/Fapta_asis.h"
#include "include/Fapta_com.h"
#include "include/Fapta_info.h"
#include "include/Persoana_factory.h"
#include "include/Repr_asociatie.h"

using namespace std;

int main() {

try {
    // Fapta_com fapta1({"poza"},{"Andrei","Mircea"},"scris");
    // cout<<fapta1.getSeveritate();

    App& app = App::getInstance();
    app.addCaz({12345, examinare::colocviu,"Vlad"});

    Fapta_asis fapta1asis({"poze","link"},"AI");
    const std::shared_ptr<Fapta> fapta1 = std::make_shared<Fapta_asis>(fapta1asis);
    app.addFapta(1,fapta1);
    Fapta_info fapta1info({"link","poza"},sursa::material_didactic);
    const std::shared_ptr<Fapta> fapta2 = std::make_shared<Fapta_info>(fapta1info);
    app.addFapta(1,fapta2);
    Fapta_com fapta1com({"link","dovezi"},{"Mircea","Alex","Cristian"},"oral");
    const std::shared_ptr<Fapta> fapta3 = std::make_shared<Fapta_com>(fapta1com);
    app.addFapta(1,fapta3);

    app.addCaz({12345, examinare::proiect,"Vlad"});

    Fapta_info fapta2info({"git"},sursa::Internet);
    const std::shared_ptr<Fapta> fapta4 = std::make_shared<Fapta_info>(fapta2info);
    //app.addFapta(2,fapta4);

    app.displayCazSev();

    auto pers1 = Persoana_factory::createDecan("Mircea");
    auto pers2 = Persoana_factory::createCadruDidactic("Dranga",20);
    Comisie comisia1({pers1,pers2});
    app.addComisie(comisia1);



}
    catch (std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}