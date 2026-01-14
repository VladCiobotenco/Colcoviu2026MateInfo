#include <iostream>

#include "include/App.h"
#include "include/Fapta_asis.h"
#include "include/Fapta_com.h"

using namespace std;

int main() {


    // Fapta_com fapta1({"poza"},{"Andrei","Mircea"},"scris");
    // cout<<fapta1.getSeveritate();

    App& app = App::getInstance();
    app.addCaz({12345, examinare::colocviu,"Vlad"});
    Fapta_asis fapta1asis({"poze","link"},"AI");
    //std::shared_ptr<Fapta> fapta1 = std::make_shared<Fapta>(fapta1asis);


    return 0;
}